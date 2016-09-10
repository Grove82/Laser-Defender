using UnityEngine;
using System.Collections;

public class EnemySpawner : MonoBehaviour {
	public GameObject enemyPrefab;
	public float height = 10f;
	public float width = 5f;
	public float speed = 0f;
	public float spawnDelay = 0.5f;

	public float xmax;
	public float xmin;
	private float padding;
	public enum directions {left,right};
	public directions currentDirection = directions.left;
	// Use this for initialization
	void Start () {
		float distance = transform.position.z - Camera.main.transform.position.z;	
		Vector3 leftmost = Camera.main.ViewportToWorldPoint (new Vector3 (0,0,distance));
		Vector3 rightmost = Camera.main.ViewportToWorldPoint (new Vector3 (1,0,distance));

		padding = width / 2; 
		xmin = leftmost.x + padding;
		xmax = rightmost.x - padding;
		SpawnUntilFull ();
	}

	Transform NextFreePosition () {
		foreach (Transform childPositionGameObject in transform) {
			if (childPositionGameObject.childCount == 0) {
				return childPositionGameObject;
			}
		}
		return null;
	}

	bool AllMembersDead () {
		foreach (Transform childPositionGameObject in transform) {
			if (childPositionGameObject.childCount > 0) {
				return false;
			}
		}
		return true;
	}

	void SpawnUntilFull(){
		Transform freePosition = NextFreePosition ();
		if (freePosition) {
			GameObject enemy = Instantiate (enemyPrefab, freePosition.position, Quaternion.identity) as GameObject;
			enemy.transform.parent = freePosition;
		}

		if (NextFreePosition ()) {
			Invoke ("SpawnUntilFull", spawnDelay);
		}
	}

	void SpawnEnemies() {
		foreach (Transform child in transform) {
			GameObject enemy = Instantiate(enemyPrefab, child.transform.position, Quaternion.identity) as GameObject;
			enemy.transform.parent = child;
		}
	}
	
	// Update is called once per frame
	void Update () {
		if (transform.position.x <= xmin-.2f) {
			currentDirection = directions.right;
		} else if (transform.position.x >= xmax+.2f) {
			currentDirection = directions.left;
		} 

		if (currentDirection == directions.left) {
			transform.position += Vector3.left * speed * Time.deltaTime;
		}else {
			transform.position += Vector3.right * speed * Time.deltaTime;
		}

		if(AllMembersDead ()) {
			SpawnUntilFull ();
		}
	}
	


	public void OnDrawGizmos () {
		Gizmos.DrawWireCube (transform.position, new Vector3 (width, height));
	}

}

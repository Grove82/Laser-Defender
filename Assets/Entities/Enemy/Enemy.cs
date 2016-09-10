using UnityEngine;
using System.Collections;

public class Enemy : MonoBehaviour {

	public float health = 150;
	public GameObject badLaser;
	public float laserSpeed = -10;
	public float shotsPerSec = 0.5f;
	public int scoreValue = 150;
	public AudioClip laserShot;
	public AudioClip shipExplosion;
	public AudioSource explosionPlayer;
	public float explosionVolumne = 10f;
	private ScoreKeeper scoreKeeper;
	private AudioSource laserPlayer;


	// Use this for initialization
	void Start () {
		scoreKeeper = GameObject.Find ("Score").GetComponent<ScoreKeeper> ();
		laserPlayer = gameObject.AddComponent<AudioSource>();
	}

	// Update is called once per frame
	void Update () {
		float probability = Time.deltaTime * shotsPerSec;
		if (Random.value < probability) {
			Fire ();
		}
	}

	void Fire () {
		
		laserPlayer.PlayOneShot (laserShot, .5f);
		GameObject redBeam = Instantiate (badLaser, transform.position, Quaternion.identity) as GameObject;
		redBeam.GetComponent<Rigidbody2D> ().velocity = new Vector2 (0f, laserSpeed);
	}

	void OnTriggerEnter2D(Collider2D col){

		Laser pewpew = col.gameObject.GetComponent<Laser> ();
		if (pewpew) {
			health -= pewpew.GetDamage ();
			pewpew.Hit ();
			if (health <= 0) {
				Die ();
			}
		}
	}

	void Die() {
		AudioSource.PlayClipAtPoint (shipExplosion, new Vector3(0f,0f,-10.0f), explosionVolumne);
		Destroy (gameObject);
		scoreKeeper.Score (scoreValue);
	}
}

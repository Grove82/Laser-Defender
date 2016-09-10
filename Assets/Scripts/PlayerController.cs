using UnityEngine;
using System.Collections;

public class PlayerController : MonoBehaviour {
	public float throttle;
	public float padding = 1f;
	public GameObject laser;
	public float laserSpeed = 3f;
	public float firingRate = 0.2f;
	public float health = 200f;
	float xmin = -5f;
	float xmax = 5f;
	public AudioClip laserShot;
	public AudioClip explosion;
	private AudioSource soundPlayer;


	void Start () {
		float distance = transform.position.z - Camera.main.transform.position.z;	
		Vector3 leftmost = Camera.main.ViewportToWorldPoint (new Vector3 (0,0,distance));
		Vector3 rightmost = Camera.main.ViewportToWorldPoint (new Vector3 (1,0,distance));
		xmin = leftmost.x + padding;
		xmax = rightmost.x - padding;
		soundPlayer = GetComponent<AudioSource> ();
	}

	void Pewpew () {
		soundPlayer.PlayOneShot (laserShot, .5f);
		//AudioSource.PlayClipAtPoint (laserShot, transform.position);
		GameObject beam = Instantiate (laser, transform.position, Quaternion.identity) as GameObject;
		beam.GetComponent<Rigidbody2D>().velocity = new Vector3 (0, laserSpeed, transform.position.z);
	}

	void Update () {
		if (Input.GetKey (KeyCode.LeftArrow)) {			
			transform.position += Vector3.left * throttle * Time.deltaTime;
		} else if (Input.GetKey (KeyCode.RightArrow)) {
			transform.position += Vector3.right * throttle * Time.deltaTime;
		}

		if (Input.GetKeyDown (KeyCode.Space)) {
			InvokeRepeating ("Pewpew", .0001f, firingRate);
		}

		if (Input.GetKeyUp (KeyCode.Space)) {
			CancelInvoke ("Pewpew");
		}

		float newX = Mathf.Clamp (transform.position.x, xmin, xmax);
		transform.position = new Vector3 (newX, transform.position.y, transform.position.z);
	}

	void OnTriggerEnter2D(Collider2D col){
		Laser pewpew = col.gameObject.GetComponent<Laser> ();
		if (pewpew) {
			health -= pewpew.GetDamage ();
			pewpew.Hit ();
			if (health <= 0) {
				Destroy (gameObject);
				AudioSource.PlayClipAtPoint (explosion, new Vector3(0f,0f,-7.0f));
				LevelManager man = GameObject.Find ("LevelManager").GetComponent<LevelManager> ();
				man.LoadLevel ("Win Screen");
			}
		}
	}
}

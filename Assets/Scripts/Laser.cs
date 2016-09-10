using UnityEngine;
using System.Collections;

public class Laser : MonoBehaviour {

	public float Damage = 100f;

	public float GetDamage () {
		return Damage;
	}

	public void Hit() {
		Destroy (gameObject);
	}
}

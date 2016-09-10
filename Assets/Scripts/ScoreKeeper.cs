using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class ScoreKeeper : MonoBehaviour {

	private Text text;
	public static int score = 0;
	public static ScoreKeeper instance;
	// Use this for initialization

	void Awake () {
		instance = this;
	}
	void Start () {
		text = GetComponent<Text> ();
		Reset ();
	}

	public static void Reset () {
		score = 0;
		instance.text.text = score.ToString ();
	}
	
	public void Score (int points) {
		//score = int.Parse(text.text);
		score += points;
		text.text = score.ToString ();
		
	}
}

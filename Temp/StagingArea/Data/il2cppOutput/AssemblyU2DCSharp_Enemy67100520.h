#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.AudioClip
struct AudioClip_t794140988;
// UnityEngine.AudioSource
struct AudioSource_t1740077639;
// ScoreKeeper
struct ScoreKeeper_t2936965124;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Enemy
struct  Enemy_t67100520  : public MonoBehaviour_t667441552
{
public:
	// System.Single Enemy::health
	float ___health_2;
	// UnityEngine.GameObject Enemy::badLaser
	GameObject_t3674682005 * ___badLaser_3;
	// System.Single Enemy::laserSpeed
	float ___laserSpeed_4;
	// System.Single Enemy::shotsPerSec
	float ___shotsPerSec_5;
	// System.Int32 Enemy::scoreValue
	int32_t ___scoreValue_6;
	// UnityEngine.AudioClip Enemy::laserShot
	AudioClip_t794140988 * ___laserShot_7;
	// UnityEngine.AudioClip Enemy::shipExplosion
	AudioClip_t794140988 * ___shipExplosion_8;
	// UnityEngine.AudioSource Enemy::explosionPlayer
	AudioSource_t1740077639 * ___explosionPlayer_9;
	// System.Single Enemy::explosionVolumne
	float ___explosionVolumne_10;
	// ScoreKeeper Enemy::scoreKeeper
	ScoreKeeper_t2936965124 * ___scoreKeeper_11;
	// UnityEngine.AudioSource Enemy::laserPlayer
	AudioSource_t1740077639 * ___laserPlayer_12;

public:
	inline static int32_t get_offset_of_health_2() { return static_cast<int32_t>(offsetof(Enemy_t67100520, ___health_2)); }
	inline float get_health_2() const { return ___health_2; }
	inline float* get_address_of_health_2() { return &___health_2; }
	inline void set_health_2(float value)
	{
		___health_2 = value;
	}

	inline static int32_t get_offset_of_badLaser_3() { return static_cast<int32_t>(offsetof(Enemy_t67100520, ___badLaser_3)); }
	inline GameObject_t3674682005 * get_badLaser_3() const { return ___badLaser_3; }
	inline GameObject_t3674682005 ** get_address_of_badLaser_3() { return &___badLaser_3; }
	inline void set_badLaser_3(GameObject_t3674682005 * value)
	{
		___badLaser_3 = value;
		Il2CppCodeGenWriteBarrier(&___badLaser_3, value);
	}

	inline static int32_t get_offset_of_laserSpeed_4() { return static_cast<int32_t>(offsetof(Enemy_t67100520, ___laserSpeed_4)); }
	inline float get_laserSpeed_4() const { return ___laserSpeed_4; }
	inline float* get_address_of_laserSpeed_4() { return &___laserSpeed_4; }
	inline void set_laserSpeed_4(float value)
	{
		___laserSpeed_4 = value;
	}

	inline static int32_t get_offset_of_shotsPerSec_5() { return static_cast<int32_t>(offsetof(Enemy_t67100520, ___shotsPerSec_5)); }
	inline float get_shotsPerSec_5() const { return ___shotsPerSec_5; }
	inline float* get_address_of_shotsPerSec_5() { return &___shotsPerSec_5; }
	inline void set_shotsPerSec_5(float value)
	{
		___shotsPerSec_5 = value;
	}

	inline static int32_t get_offset_of_scoreValue_6() { return static_cast<int32_t>(offsetof(Enemy_t67100520, ___scoreValue_6)); }
	inline int32_t get_scoreValue_6() const { return ___scoreValue_6; }
	inline int32_t* get_address_of_scoreValue_6() { return &___scoreValue_6; }
	inline void set_scoreValue_6(int32_t value)
	{
		___scoreValue_6 = value;
	}

	inline static int32_t get_offset_of_laserShot_7() { return static_cast<int32_t>(offsetof(Enemy_t67100520, ___laserShot_7)); }
	inline AudioClip_t794140988 * get_laserShot_7() const { return ___laserShot_7; }
	inline AudioClip_t794140988 ** get_address_of_laserShot_7() { return &___laserShot_7; }
	inline void set_laserShot_7(AudioClip_t794140988 * value)
	{
		___laserShot_7 = value;
		Il2CppCodeGenWriteBarrier(&___laserShot_7, value);
	}

	inline static int32_t get_offset_of_shipExplosion_8() { return static_cast<int32_t>(offsetof(Enemy_t67100520, ___shipExplosion_8)); }
	inline AudioClip_t794140988 * get_shipExplosion_8() const { return ___shipExplosion_8; }
	inline AudioClip_t794140988 ** get_address_of_shipExplosion_8() { return &___shipExplosion_8; }
	inline void set_shipExplosion_8(AudioClip_t794140988 * value)
	{
		___shipExplosion_8 = value;
		Il2CppCodeGenWriteBarrier(&___shipExplosion_8, value);
	}

	inline static int32_t get_offset_of_explosionPlayer_9() { return static_cast<int32_t>(offsetof(Enemy_t67100520, ___explosionPlayer_9)); }
	inline AudioSource_t1740077639 * get_explosionPlayer_9() const { return ___explosionPlayer_9; }
	inline AudioSource_t1740077639 ** get_address_of_explosionPlayer_9() { return &___explosionPlayer_9; }
	inline void set_explosionPlayer_9(AudioSource_t1740077639 * value)
	{
		___explosionPlayer_9 = value;
		Il2CppCodeGenWriteBarrier(&___explosionPlayer_9, value);
	}

	inline static int32_t get_offset_of_explosionVolumne_10() { return static_cast<int32_t>(offsetof(Enemy_t67100520, ___explosionVolumne_10)); }
	inline float get_explosionVolumne_10() const { return ___explosionVolumne_10; }
	inline float* get_address_of_explosionVolumne_10() { return &___explosionVolumne_10; }
	inline void set_explosionVolumne_10(float value)
	{
		___explosionVolumne_10 = value;
	}

	inline static int32_t get_offset_of_scoreKeeper_11() { return static_cast<int32_t>(offsetof(Enemy_t67100520, ___scoreKeeper_11)); }
	inline ScoreKeeper_t2936965124 * get_scoreKeeper_11() const { return ___scoreKeeper_11; }
	inline ScoreKeeper_t2936965124 ** get_address_of_scoreKeeper_11() { return &___scoreKeeper_11; }
	inline void set_scoreKeeper_11(ScoreKeeper_t2936965124 * value)
	{
		___scoreKeeper_11 = value;
		Il2CppCodeGenWriteBarrier(&___scoreKeeper_11, value);
	}

	inline static int32_t get_offset_of_laserPlayer_12() { return static_cast<int32_t>(offsetof(Enemy_t67100520, ___laserPlayer_12)); }
	inline AudioSource_t1740077639 * get_laserPlayer_12() const { return ___laserPlayer_12; }
	inline AudioSource_t1740077639 ** get_address_of_laserPlayer_12() { return &___laserPlayer_12; }
	inline void set_laserPlayer_12(AudioSource_t1740077639 * value)
	{
		___laserPlayer_12 = value;
		Il2CppCodeGenWriteBarrier(&___laserPlayer_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

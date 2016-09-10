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

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t2866526589  : public MonoBehaviour_t667441552
{
public:
	// System.Single PlayerController::throttle
	float ___throttle_2;
	// System.Single PlayerController::padding
	float ___padding_3;
	// UnityEngine.GameObject PlayerController::laser
	GameObject_t3674682005 * ___laser_4;
	// System.Single PlayerController::laserSpeed
	float ___laserSpeed_5;
	// System.Single PlayerController::firingRate
	float ___firingRate_6;
	// System.Single PlayerController::health
	float ___health_7;
	// System.Single PlayerController::xmin
	float ___xmin_8;
	// System.Single PlayerController::xmax
	float ___xmax_9;
	// UnityEngine.AudioClip PlayerController::laserShot
	AudioClip_t794140988 * ___laserShot_10;
	// UnityEngine.AudioClip PlayerController::explosion
	AudioClip_t794140988 * ___explosion_11;
	// UnityEngine.AudioSource PlayerController::soundPlayer
	AudioSource_t1740077639 * ___soundPlayer_12;

public:
	inline static int32_t get_offset_of_throttle_2() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___throttle_2)); }
	inline float get_throttle_2() const { return ___throttle_2; }
	inline float* get_address_of_throttle_2() { return &___throttle_2; }
	inline void set_throttle_2(float value)
	{
		___throttle_2 = value;
	}

	inline static int32_t get_offset_of_padding_3() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___padding_3)); }
	inline float get_padding_3() const { return ___padding_3; }
	inline float* get_address_of_padding_3() { return &___padding_3; }
	inline void set_padding_3(float value)
	{
		___padding_3 = value;
	}

	inline static int32_t get_offset_of_laser_4() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___laser_4)); }
	inline GameObject_t3674682005 * get_laser_4() const { return ___laser_4; }
	inline GameObject_t3674682005 ** get_address_of_laser_4() { return &___laser_4; }
	inline void set_laser_4(GameObject_t3674682005 * value)
	{
		___laser_4 = value;
		Il2CppCodeGenWriteBarrier(&___laser_4, value);
	}

	inline static int32_t get_offset_of_laserSpeed_5() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___laserSpeed_5)); }
	inline float get_laserSpeed_5() const { return ___laserSpeed_5; }
	inline float* get_address_of_laserSpeed_5() { return &___laserSpeed_5; }
	inline void set_laserSpeed_5(float value)
	{
		___laserSpeed_5 = value;
	}

	inline static int32_t get_offset_of_firingRate_6() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___firingRate_6)); }
	inline float get_firingRate_6() const { return ___firingRate_6; }
	inline float* get_address_of_firingRate_6() { return &___firingRate_6; }
	inline void set_firingRate_6(float value)
	{
		___firingRate_6 = value;
	}

	inline static int32_t get_offset_of_health_7() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___health_7)); }
	inline float get_health_7() const { return ___health_7; }
	inline float* get_address_of_health_7() { return &___health_7; }
	inline void set_health_7(float value)
	{
		___health_7 = value;
	}

	inline static int32_t get_offset_of_xmin_8() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___xmin_8)); }
	inline float get_xmin_8() const { return ___xmin_8; }
	inline float* get_address_of_xmin_8() { return &___xmin_8; }
	inline void set_xmin_8(float value)
	{
		___xmin_8 = value;
	}

	inline static int32_t get_offset_of_xmax_9() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___xmax_9)); }
	inline float get_xmax_9() const { return ___xmax_9; }
	inline float* get_address_of_xmax_9() { return &___xmax_9; }
	inline void set_xmax_9(float value)
	{
		___xmax_9 = value;
	}

	inline static int32_t get_offset_of_laserShot_10() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___laserShot_10)); }
	inline AudioClip_t794140988 * get_laserShot_10() const { return ___laserShot_10; }
	inline AudioClip_t794140988 ** get_address_of_laserShot_10() { return &___laserShot_10; }
	inline void set_laserShot_10(AudioClip_t794140988 * value)
	{
		___laserShot_10 = value;
		Il2CppCodeGenWriteBarrier(&___laserShot_10, value);
	}

	inline static int32_t get_offset_of_explosion_11() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___explosion_11)); }
	inline AudioClip_t794140988 * get_explosion_11() const { return ___explosion_11; }
	inline AudioClip_t794140988 ** get_address_of_explosion_11() { return &___explosion_11; }
	inline void set_explosion_11(AudioClip_t794140988 * value)
	{
		___explosion_11 = value;
		Il2CppCodeGenWriteBarrier(&___explosion_11, value);
	}

	inline static int32_t get_offset_of_soundPlayer_12() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___soundPlayer_12)); }
	inline AudioSource_t1740077639 * get_soundPlayer_12() const { return ___soundPlayer_12; }
	inline AudioSource_t1740077639 ** get_address_of_soundPlayer_12() { return &___soundPlayer_12; }
	inline void set_soundPlayer_12(AudioSource_t1740077639 * value)
	{
		___soundPlayer_12 = value;
		Il2CppCodeGenWriteBarrier(&___soundPlayer_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

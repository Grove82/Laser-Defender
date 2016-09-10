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

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharp_EnemySpawner_directions3572911459.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemySpawner
struct  EnemySpawner_t2483298528  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject EnemySpawner::enemyPrefab
	GameObject_t3674682005 * ___enemyPrefab_2;
	// System.Single EnemySpawner::height
	float ___height_3;
	// System.Single EnemySpawner::width
	float ___width_4;
	// System.Single EnemySpawner::speed
	float ___speed_5;
	// System.Single EnemySpawner::spawnDelay
	float ___spawnDelay_6;
	// System.Single EnemySpawner::xmax
	float ___xmax_7;
	// System.Single EnemySpawner::xmin
	float ___xmin_8;
	// System.Single EnemySpawner::padding
	float ___padding_9;
	// EnemySpawner/directions EnemySpawner::currentDirection
	int32_t ___currentDirection_10;

public:
	inline static int32_t get_offset_of_enemyPrefab_2() { return static_cast<int32_t>(offsetof(EnemySpawner_t2483298528, ___enemyPrefab_2)); }
	inline GameObject_t3674682005 * get_enemyPrefab_2() const { return ___enemyPrefab_2; }
	inline GameObject_t3674682005 ** get_address_of_enemyPrefab_2() { return &___enemyPrefab_2; }
	inline void set_enemyPrefab_2(GameObject_t3674682005 * value)
	{
		___enemyPrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___enemyPrefab_2, value);
	}

	inline static int32_t get_offset_of_height_3() { return static_cast<int32_t>(offsetof(EnemySpawner_t2483298528, ___height_3)); }
	inline float get_height_3() const { return ___height_3; }
	inline float* get_address_of_height_3() { return &___height_3; }
	inline void set_height_3(float value)
	{
		___height_3 = value;
	}

	inline static int32_t get_offset_of_width_4() { return static_cast<int32_t>(offsetof(EnemySpawner_t2483298528, ___width_4)); }
	inline float get_width_4() const { return ___width_4; }
	inline float* get_address_of_width_4() { return &___width_4; }
	inline void set_width_4(float value)
	{
		___width_4 = value;
	}

	inline static int32_t get_offset_of_speed_5() { return static_cast<int32_t>(offsetof(EnemySpawner_t2483298528, ___speed_5)); }
	inline float get_speed_5() const { return ___speed_5; }
	inline float* get_address_of_speed_5() { return &___speed_5; }
	inline void set_speed_5(float value)
	{
		___speed_5 = value;
	}

	inline static int32_t get_offset_of_spawnDelay_6() { return static_cast<int32_t>(offsetof(EnemySpawner_t2483298528, ___spawnDelay_6)); }
	inline float get_spawnDelay_6() const { return ___spawnDelay_6; }
	inline float* get_address_of_spawnDelay_6() { return &___spawnDelay_6; }
	inline void set_spawnDelay_6(float value)
	{
		___spawnDelay_6 = value;
	}

	inline static int32_t get_offset_of_xmax_7() { return static_cast<int32_t>(offsetof(EnemySpawner_t2483298528, ___xmax_7)); }
	inline float get_xmax_7() const { return ___xmax_7; }
	inline float* get_address_of_xmax_7() { return &___xmax_7; }
	inline void set_xmax_7(float value)
	{
		___xmax_7 = value;
	}

	inline static int32_t get_offset_of_xmin_8() { return static_cast<int32_t>(offsetof(EnemySpawner_t2483298528, ___xmin_8)); }
	inline float get_xmin_8() const { return ___xmin_8; }
	inline float* get_address_of_xmin_8() { return &___xmin_8; }
	inline void set_xmin_8(float value)
	{
		___xmin_8 = value;
	}

	inline static int32_t get_offset_of_padding_9() { return static_cast<int32_t>(offsetof(EnemySpawner_t2483298528, ___padding_9)); }
	inline float get_padding_9() const { return ___padding_9; }
	inline float* get_address_of_padding_9() { return &___padding_9; }
	inline void set_padding_9(float value)
	{
		___padding_9 = value;
	}

	inline static int32_t get_offset_of_currentDirection_10() { return static_cast<int32_t>(offsetof(EnemySpawner_t2483298528, ___currentDirection_10)); }
	inline int32_t get_currentDirection_10() const { return ___currentDirection_10; }
	inline int32_t* get_address_of_currentDirection_10() { return &___currentDirection_10; }
	inline void set_currentDirection_10(int32_t value)
	{
		___currentDirection_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

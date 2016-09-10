#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Laser
struct  Laser_t73191083  : public MonoBehaviour_t667441552
{
public:
	// System.Single Laser::Damage
	float ___Damage_2;

public:
	inline static int32_t get_offset_of_Damage_2() { return static_cast<int32_t>(offsetof(Laser_t73191083, ___Damage_2)); }
	inline float get_Damage_2() const { return ___Damage_2; }
	inline float* get_address_of_Damage_2() { return &___Damage_2; }
	inline void set_Damage_2(float value)
	{
		___Damage_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

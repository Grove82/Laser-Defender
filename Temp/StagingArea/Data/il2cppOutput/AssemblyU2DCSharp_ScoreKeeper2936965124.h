#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t9039225;
// ScoreKeeper
struct ScoreKeeper_t2936965124;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScoreKeeper
struct  ScoreKeeper_t2936965124  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.UI.Text ScoreKeeper::text
	Text_t9039225 * ___text_2;

public:
	inline static int32_t get_offset_of_text_2() { return static_cast<int32_t>(offsetof(ScoreKeeper_t2936965124, ___text_2)); }
	inline Text_t9039225 * get_text_2() const { return ___text_2; }
	inline Text_t9039225 ** get_address_of_text_2() { return &___text_2; }
	inline void set_text_2(Text_t9039225 * value)
	{
		___text_2 = value;
		Il2CppCodeGenWriteBarrier(&___text_2, value);
	}
};

struct ScoreKeeper_t2936965124_StaticFields
{
public:
	// System.Int32 ScoreKeeper::score
	int32_t ___score_3;
	// ScoreKeeper ScoreKeeper::instance
	ScoreKeeper_t2936965124 * ___instance_4;

public:
	inline static int32_t get_offset_of_score_3() { return static_cast<int32_t>(offsetof(ScoreKeeper_t2936965124_StaticFields, ___score_3)); }
	inline int32_t get_score_3() const { return ___score_3; }
	inline int32_t* get_address_of_score_3() { return &___score_3; }
	inline void set_score_3(int32_t value)
	{
		___score_3 = value;
	}

	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(ScoreKeeper_t2936965124_StaticFields, ___instance_4)); }
	inline ScoreKeeper_t2936965124 * get_instance_4() const { return ___instance_4; }
	inline ScoreKeeper_t2936965124 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(ScoreKeeper_t2936965124 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier(&___instance_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

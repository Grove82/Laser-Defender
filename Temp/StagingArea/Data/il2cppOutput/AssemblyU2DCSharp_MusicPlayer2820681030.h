#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MusicPlayer
struct MusicPlayer_t2820681030;
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

// MusicPlayer
struct  MusicPlayer_t2820681030  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.AudioClip MusicPlayer::startClip
	AudioClip_t794140988 * ___startClip_3;
	// UnityEngine.AudioClip MusicPlayer::gameClip
	AudioClip_t794140988 * ___gameClip_4;
	// UnityEngine.AudioClip MusicPlayer::endClip
	AudioClip_t794140988 * ___endClip_5;
	// UnityEngine.AudioSource MusicPlayer::music
	AudioSource_t1740077639 * ___music_6;

public:
	inline static int32_t get_offset_of_startClip_3() { return static_cast<int32_t>(offsetof(MusicPlayer_t2820681030, ___startClip_3)); }
	inline AudioClip_t794140988 * get_startClip_3() const { return ___startClip_3; }
	inline AudioClip_t794140988 ** get_address_of_startClip_3() { return &___startClip_3; }
	inline void set_startClip_3(AudioClip_t794140988 * value)
	{
		___startClip_3 = value;
		Il2CppCodeGenWriteBarrier(&___startClip_3, value);
	}

	inline static int32_t get_offset_of_gameClip_4() { return static_cast<int32_t>(offsetof(MusicPlayer_t2820681030, ___gameClip_4)); }
	inline AudioClip_t794140988 * get_gameClip_4() const { return ___gameClip_4; }
	inline AudioClip_t794140988 ** get_address_of_gameClip_4() { return &___gameClip_4; }
	inline void set_gameClip_4(AudioClip_t794140988 * value)
	{
		___gameClip_4 = value;
		Il2CppCodeGenWriteBarrier(&___gameClip_4, value);
	}

	inline static int32_t get_offset_of_endClip_5() { return static_cast<int32_t>(offsetof(MusicPlayer_t2820681030, ___endClip_5)); }
	inline AudioClip_t794140988 * get_endClip_5() const { return ___endClip_5; }
	inline AudioClip_t794140988 ** get_address_of_endClip_5() { return &___endClip_5; }
	inline void set_endClip_5(AudioClip_t794140988 * value)
	{
		___endClip_5 = value;
		Il2CppCodeGenWriteBarrier(&___endClip_5, value);
	}

	inline static int32_t get_offset_of_music_6() { return static_cast<int32_t>(offsetof(MusicPlayer_t2820681030, ___music_6)); }
	inline AudioSource_t1740077639 * get_music_6() const { return ___music_6; }
	inline AudioSource_t1740077639 ** get_address_of_music_6() { return &___music_6; }
	inline void set_music_6(AudioSource_t1740077639 * value)
	{
		___music_6 = value;
		Il2CppCodeGenWriteBarrier(&___music_6, value);
	}
};

struct MusicPlayer_t2820681030_StaticFields
{
public:
	// MusicPlayer MusicPlayer::instance
	MusicPlayer_t2820681030 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(MusicPlayer_t2820681030_StaticFields, ___instance_2)); }
	inline MusicPlayer_t2820681030 * get_instance_2() const { return ___instance_2; }
	inline MusicPlayer_t2820681030 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(MusicPlayer_t2820681030 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// Enemy
struct Enemy_t67100520;
// ScoreKeeper
struct ScoreKeeper_t2936965124;
// System.Object
struct Il2CppObject;
// UnityEngine.AudioSource
struct AudioSource_t1740077639;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t1743771669;
// UnityEngine.Collider2D
struct Collider2D_t1552025098;
// Laser
struct Laser_t73191083;
// EnemySpawner
struct EnemySpawner_t2483298528;
// UnityEngine.Transform
struct Transform_t1659122786;
// LevelManager
struct LevelManager_t2278695849;
// System.String
struct String_t;
// MusicPlayer
struct MusicPlayer_t2820681030;
// PlayerController
struct PlayerController_t2866526589;
// Position
struct Position_t812449097;
// ScoreDisplay
struct ScoreDisplay_t3356466672;
// UnityEngine.UI.Text
struct Text_t9039225;
// Shredder
struct Shredder_t4090516629;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array1146569071.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790MethodDeclarations.h"
#include "AssemblyU2DCSharp_Enemy67100520.h"
#include "AssemblyU2DCSharp_Enemy67100520MethodDeclarations.h"
#include "mscorlib_System_Void2863195528.h"
#include "UnityEngine_UnityEngine_MonoBehaviour667441552MethodDeclarations.h"
#include "mscorlib_System_Single4291918972.h"
#include "mscorlib_System_Int321153838500.h"
#include "UnityEngine_UnityEngine_GameObject3674682005MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component3501516275MethodDeclarations.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "AssemblyU2DCSharp_ScoreKeeper2936965124.h"
#include "UnityEngine_UnityEngine_AudioSource1740077639.h"
#include "UnityEngine_UnityEngine_Time4241968337MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Random3156561159MethodDeclarations.h"
#include "UnityEngine_UnityEngine_AudioSource1740077639MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform1659122786MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Object3071478659MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Rigidbody2D1743771669MethodDeclarations.h"
#include "UnityEngine_UnityEngine_AudioClip794140988.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"
#include "UnityEngine_UnityEngine_Object3071478659.h"
#include "UnityEngine_UnityEngine_Rigidbody2D1743771669.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UnityEngine_Vector24282066565MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Collider2D1552025098.h"
#include "AssemblyU2DCSharp_Laser73191083MethodDeclarations.h"
#include "AssemblyU2DCSharp_Laser73191083.h"
#include "mscorlib_System_Boolean476798718.h"
#include "AssemblyU2DCSharp_ScoreKeeper2936965124MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector34282066566MethodDeclarations.h"
#include "AssemblyU2DCSharp_EnemySpawner2483298528.h"
#include "AssemblyU2DCSharp_EnemySpawner2483298528MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Camera2727095145MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Camera2727095145.h"
#include "mscorlib_System_Object4170816371.h"
#include "AssemblyU2DCSharp_EnemySpawner_directions3572911459.h"
#include "UnityEngine_UnityEngine_Gizmos2849394813MethodDeclarations.h"
#include "AssemblyU2DCSharp_EnemySpawner_directions3572911459MethodDeclarations.h"
#include "AssemblyU2DCSharp_LevelManager2278695849.h"
#include "AssemblyU2DCSharp_LevelManager2278695849MethodDeclarations.h"
#include "mscorlib_System_String7231557MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Debug4195163081MethodDeclarations.h"
#include "UnityEngine_UnityEngine_SceneManagement_SceneManag2940962239MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Application2856536070MethodDeclarations.h"
#include "AssemblyU2DCSharp_MusicPlayer2820681030.h"
#include "AssemblyU2DCSharp_MusicPlayer2820681030MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component3501516275.h"
#include "AssemblyU2DCSharp_PlayerController2866526589.h"
#include "AssemblyU2DCSharp_PlayerController2866526589MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Input4200062272MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Mathf4203372500MethodDeclarations.h"
#include "UnityEngine_UnityEngine_KeyCode3128317986.h"
#include "AssemblyU2DCSharp_Position812449097.h"
#include "AssemblyU2DCSharp_Position812449097MethodDeclarations.h"
#include "AssemblyU2DCSharp_ScoreDisplay3356466672.h"
#include "AssemblyU2DCSharp_ScoreDisplay3356466672MethodDeclarations.h"
#include "mscorlib_System_Int321153838500MethodDeclarations.h"
#include "UnityEngine_UI_UnityEngine_UI_Text9039225.h"
#include "UnityEngine_UI_UnityEngine_UI_Text9039225MethodDeclarations.h"
#include "AssemblyU2DCSharp_Shredder4090516629.h"
#include "AssemblyU2DCSharp_Shredder4090516629MethodDeclarations.h"

// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  Il2CppObject * GameObject_GetComponent_TisIl2CppObject_m2447772384_gshared (GameObject_t3674682005 * __this, const MethodInfo* method);
#define GameObject_GetComponent_TisIl2CppObject_m2447772384(__this, method) ((  Il2CppObject * (*) (GameObject_t3674682005 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2447772384_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<ScoreKeeper>()
#define GameObject_GetComponent_TisScoreKeeper_t2936965124_m2499055453(__this, method) ((  ScoreKeeper_t2936965124 * (*) (GameObject_t3674682005 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2447772384_gshared)(__this, method)
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C"  Il2CppObject * GameObject_AddComponent_TisIl2CppObject_m337943659_gshared (GameObject_t3674682005 * __this, const MethodInfo* method);
#define GameObject_AddComponent_TisIl2CppObject_m337943659(__this, method) ((  Il2CppObject * (*) (GameObject_t3674682005 *, const MethodInfo*))GameObject_AddComponent_TisIl2CppObject_m337943659_gshared)(__this, method)
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.AudioSource>()
#define GameObject_AddComponent_TisAudioSource_t1740077639_m4077318770(__this, method) ((  AudioSource_t1740077639 * (*) (GameObject_t3674682005 *, const MethodInfo*))GameObject_AddComponent_TisIl2CppObject_m337943659_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody2D>()
#define GameObject_GetComponent_TisRigidbody2D_t1743771669_m3829971481(__this, method) ((  Rigidbody2D_t1743771669 * (*) (GameObject_t3674682005 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2447772384_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<Laser>()
#define GameObject_GetComponent_TisLaser_t73191083_m3882464470(__this, method) ((  Laser_t73191083 * (*) (GameObject_t3674682005 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2447772384_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Il2CppObject * Component_GetComponent_TisIl2CppObject_m267839954_gshared (Component_t3501516275 * __this, const MethodInfo* method);
#define Component_GetComponent_TisIl2CppObject_m267839954(__this, method) ((  Il2CppObject * (*) (Component_t3501516275 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
#define Component_GetComponent_TisAudioSource_t1740077639_m3821406207(__this, method) ((  AudioSource_t1740077639 * (*) (Component_t3501516275 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<LevelManager>()
#define GameObject_GetComponent_TisLevelManager_t2278695849_m3017959828(__this, method) ((  LevelManager_t2278695849 * (*) (GameObject_t3674682005 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2447772384_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
#define Component_GetComponent_TisText_t9039225_m1610753993(__this, method) ((  Text_t9039225 * (*) (Component_t3501516275 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Enemy::.ctor()
extern "C"  void Enemy__ctor_m1781972739 (Enemy_t67100520 * __this, const MethodInfo* method)
{
	{
		__this->set_health_2((150.0f));
		__this->set_laserSpeed_4((-10.0f));
		__this->set_shotsPerSec_5((0.5f));
		__this->set_scoreValue_6(((int32_t)150));
		__this->set_explosionVolumne_10((10.0f));
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Enemy::Start()
extern const MethodInfo* GameObject_GetComponent_TisScoreKeeper_t2936965124_m2499055453_MethodInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisAudioSource_t1740077639_m4077318770_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral79711858;
extern const uint32_t Enemy_Start_m729110531_MetadataUsageId;
extern "C"  void Enemy_Start_m729110531 (Enemy_t67100520 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Enemy_Start_m729110531_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t3674682005 * L_0 = GameObject_Find_m332785498(NULL /*static, unused*/, _stringLiteral79711858, /*hidden argument*/NULL);
		ScoreKeeper_t2936965124 * L_1 = GameObject_GetComponent_TisScoreKeeper_t2936965124_m2499055453(L_0, /*hidden argument*/GameObject_GetComponent_TisScoreKeeper_t2936965124_m2499055453_MethodInfo_var);
		__this->set_scoreKeeper_11(L_1);
		GameObject_t3674682005 * L_2 = Component_get_gameObject_m1170635899(__this, /*hidden argument*/NULL);
		AudioSource_t1740077639 * L_3 = GameObject_AddComponent_TisAudioSource_t1740077639_m4077318770(L_2, /*hidden argument*/GameObject_AddComponent_TisAudioSource_t1740077639_m4077318770_MethodInfo_var);
		__this->set_laserPlayer_12(L_3);
		return;
	}
}
// System.Void Enemy::Update()
extern "C"  void Enemy_Update_m1133442154 (Enemy_t67100520 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = Time_get_deltaTime_m2741110510(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = __this->get_shotsPerSec_5();
		V_0 = ((float)((float)L_0*(float)L_1));
		float L_2 = Random_get_value_m2402066692(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_3 = V_0;
		if ((!(((float)L_2) < ((float)L_3))))
		{
			goto IL_001e;
		}
	}
	{
		Enemy_Fire_m472957591(__this, /*hidden argument*/NULL);
	}

IL_001e:
	{
		return;
	}
}
// System.Void Enemy::Fire()
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern Il2CppClass* GameObject_t3674682005_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisRigidbody2D_t1743771669_m3829971481_MethodInfo_var;
extern const uint32_t Enemy_Fire_m472957591_MetadataUsageId;
extern "C"  void Enemy_Fire_m472957591 (Enemy_t67100520 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Enemy_Fire_m472957591_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t3674682005 * V_0 = NULL;
	{
		AudioSource_t1740077639 * L_0 = __this->get_laserPlayer_12();
		AudioClip_t794140988 * L_1 = __this->get_laserShot_7();
		AudioSource_PlayOneShot_m823779350(L_0, L_1, (0.5f), /*hidden argument*/NULL);
		GameObject_t3674682005 * L_2 = __this->get_badLaser_3();
		Transform_t1659122786 * L_3 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_4 = Transform_get_position_m2211398607(L_3, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_5 = Quaternion_get_identity_m1743882806(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_t3071478659 * L_6 = Object_Instantiate_m2255090103(NULL /*static, unused*/, L_2, L_4, L_5, /*hidden argument*/NULL);
		V_0 = ((GameObject_t3674682005 *)IsInstSealed(L_6, GameObject_t3674682005_il2cpp_TypeInfo_var));
		GameObject_t3674682005 * L_7 = V_0;
		Rigidbody2D_t1743771669 * L_8 = GameObject_GetComponent_TisRigidbody2D_t1743771669_m3829971481(L_7, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_t1743771669_m3829971481_MethodInfo_var);
		float L_9 = __this->get_laserSpeed_4();
		Vector2_t4282066565  L_10;
		memset(&L_10, 0, sizeof(L_10));
		Vector2__ctor_m1517109030(&L_10, (0.0f), L_9, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m100625302(L_8, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Enemy::OnTriggerEnter2D(UnityEngine.Collider2D)
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisLaser_t73191083_m3882464470_MethodInfo_var;
extern const uint32_t Enemy_OnTriggerEnter2D_m490835157_MetadataUsageId;
extern "C"  void Enemy_OnTriggerEnter2D_m490835157 (Enemy_t67100520 * __this, Collider2D_t1552025098 * ___col0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Enemy_OnTriggerEnter2D_m490835157_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Laser_t73191083 * V_0 = NULL;
	{
		Collider2D_t1552025098 * L_0 = ___col0;
		GameObject_t3674682005 * L_1 = Component_get_gameObject_m1170635899(L_0, /*hidden argument*/NULL);
		Laser_t73191083 * L_2 = GameObject_GetComponent_TisLaser_t73191083_m3882464470(L_1, /*hidden argument*/GameObject_GetComponent_TisLaser_t73191083_m3882464470_MethodInfo_var);
		V_0 = L_2;
		Laser_t73191083 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Implicit_m2106766291(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0046;
		}
	}
	{
		float L_5 = __this->get_health_2();
		Laser_t73191083 * L_6 = V_0;
		float L_7 = Laser_GetDamage_m3081925807(L_6, /*hidden argument*/NULL);
		__this->set_health_2(((float)((float)L_5-(float)L_7)));
		Laser_t73191083 * L_8 = V_0;
		Laser_Hit_m1068062289(L_8, /*hidden argument*/NULL);
		float L_9 = __this->get_health_2();
		if ((!(((float)L_9) <= ((float)(0.0f)))))
		{
			goto IL_0046;
		}
	}
	{
		Enemy_Die_m3061436577(__this, /*hidden argument*/NULL);
	}

IL_0046:
	{
		return;
	}
}
// System.Void Enemy::Die()
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern const uint32_t Enemy_Die_m3061436577_MetadataUsageId;
extern "C"  void Enemy_Die_m3061436577 (Enemy_t67100520 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Enemy_Die_m3061436577_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		AudioClip_t794140988 * L_0 = __this->get_shipExplosion_8();
		Vector3_t4282066566  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Vector3__ctor_m2926210380(&L_1, (0.0f), (0.0f), (-10.0f), /*hidden argument*/NULL);
		float L_2 = __this->get_explosionVolumne_10();
		AudioSource_PlayClipAtPoint_m2724275676(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_3 = Component_get_gameObject_m1170635899(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Destroy_m176400816(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		ScoreKeeper_t2936965124 * L_4 = __this->get_scoreKeeper_11();
		int32_t L_5 = __this->get_scoreValue_6();
		ScoreKeeper_Score_m3957967336(L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EnemySpawner::.ctor()
extern "C"  void EnemySpawner__ctor_m648727995 (EnemySpawner_t2483298528 * __this, const MethodInfo* method)
{
	{
		__this->set_height_3((10.0f));
		__this->set_width_4((5.0f));
		__this->set_spawnDelay_6((0.5f));
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EnemySpawner::Start()
extern "C"  void EnemySpawner_Start_m3890833083 (EnemySpawner_t2483298528 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	Vector3_t4282066566  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t4282066566  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t4282066566  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t4282066566  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		Transform_t1659122786 * L_0 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_1 = Transform_get_position_m2211398607(L_0, /*hidden argument*/NULL);
		V_3 = L_1;
		float L_2 = (&V_3)->get_z_3();
		Camera_t2727095145 * L_3 = Camera_get_main_m671815697(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_t1659122786 * L_4 = Component_get_transform_m4257140443(L_3, /*hidden argument*/NULL);
		Vector3_t4282066566  L_5 = Transform_get_position_m2211398607(L_4, /*hidden argument*/NULL);
		V_4 = L_5;
		float L_6 = (&V_4)->get_z_3();
		V_0 = ((float)((float)L_2-(float)L_6));
		Camera_t2727095145 * L_7 = Camera_get_main_m671815697(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_8 = V_0;
		Vector3_t4282066566  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Vector3__ctor_m2926210380(&L_9, (0.0f), (0.0f), L_8, /*hidden argument*/NULL);
		Vector3_t4282066566  L_10 = Camera_ViewportToWorldPoint_m1641213412(L_7, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		Camera_t2727095145 * L_11 = Camera_get_main_m671815697(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_12 = V_0;
		Vector3_t4282066566  L_13;
		memset(&L_13, 0, sizeof(L_13));
		Vector3__ctor_m2926210380(&L_13, (1.0f), (0.0f), L_12, /*hidden argument*/NULL);
		Vector3_t4282066566  L_14 = Camera_ViewportToWorldPoint_m1641213412(L_11, L_13, /*hidden argument*/NULL);
		V_2 = L_14;
		float L_15 = __this->get_width_4();
		__this->set_padding_9(((float)((float)L_15/(float)(2.0f))));
		float L_16 = (&V_1)->get_x_1();
		float L_17 = __this->get_padding_9();
		__this->set_xmin_8(((float)((float)L_16+(float)L_17)));
		float L_18 = (&V_2)->get_x_1();
		float L_19 = __this->get_padding_9();
		__this->set_xmax_7(((float)((float)L_18-(float)L_19)));
		EnemySpawner_SpawnUntilFull_m1400560507(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Transform EnemySpawner::NextFreePosition()
extern Il2CppClass* IEnumerator_t3464575207_il2cpp_TypeInfo_var;
extern Il2CppClass* Transform_t1659122786_il2cpp_TypeInfo_var;
extern Il2CppClass* IDisposable_t1423340799_il2cpp_TypeInfo_var;
extern const uint32_t EnemySpawner_NextFreePosition_m476184783_MetadataUsageId;
extern "C"  Transform_t1659122786 * EnemySpawner_NextFreePosition_m476184783 (EnemySpawner_t2483298528 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (EnemySpawner_NextFreePosition_m476184783_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Transform_t1659122786 * V_0 = NULL;
	Il2CppObject * V_1 = NULL;
	Transform_t1659122786 * V_2 = NULL;
	Il2CppObject * V_3 = NULL;
	Exception_t3991598821 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t3991598821 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Transform_t1659122786 * L_0 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Il2CppObject * L_1 = Transform_GetEnumerator_m688365631(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002f;
		}

IL_0011:
		{
			Il2CppObject * L_2 = V_1;
			Il2CppObject * L_3 = InterfaceFuncInvoker0< Il2CppObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t3464575207_il2cpp_TypeInfo_var, L_2);
			V_0 = ((Transform_t1659122786 *)CastclassClass(L_3, Transform_t1659122786_il2cpp_TypeInfo_var));
			Transform_t1659122786 * L_4 = V_0;
			int32_t L_5 = Transform_get_childCount_m2107810675(L_4, /*hidden argument*/NULL);
			if (L_5)
			{
				goto IL_002f;
			}
		}

IL_0028:
		{
			Transform_t1659122786 * L_6 = V_0;
			V_2 = L_6;
			IL2CPP_LEAVE(0x53, FINALLY_003f);
		}

IL_002f:
		{
			Il2CppObject * L_7 = V_1;
			bool L_8 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t3464575207_il2cpp_TypeInfo_var, L_7);
			if (L_8)
			{
				goto IL_0011;
			}
		}

IL_003a:
		{
			IL2CPP_LEAVE(0x51, FINALLY_003f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t3991598821 *)e.ex;
		goto FINALLY_003f;
	}

FINALLY_003f:
	{ // begin finally (depth: 1)
		{
			Il2CppObject * L_9 = V_1;
			V_3 = ((Il2CppObject *)IsInst(L_9, IDisposable_t1423340799_il2cpp_TypeInfo_var));
			Il2CppObject * L_10 = V_3;
			if (L_10)
			{
				goto IL_004a;
			}
		}

IL_0049:
		{
			IL2CPP_END_FINALLY(63)
		}

IL_004a:
		{
			Il2CppObject * L_11 = V_3;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t1423340799_il2cpp_TypeInfo_var, L_11);
			IL2CPP_END_FINALLY(63)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(63)
	{
		IL2CPP_JUMP_TBL(0x53, IL_0053)
		IL2CPP_JUMP_TBL(0x51, IL_0051)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t3991598821 *)
	}

IL_0051:
	{
		return (Transform_t1659122786 *)NULL;
	}

IL_0053:
	{
		Transform_t1659122786 * L_12 = V_2;
		return L_12;
	}
}
// System.Boolean EnemySpawner::AllMembersDead()
extern Il2CppClass* IEnumerator_t3464575207_il2cpp_TypeInfo_var;
extern Il2CppClass* Transform_t1659122786_il2cpp_TypeInfo_var;
extern Il2CppClass* IDisposable_t1423340799_il2cpp_TypeInfo_var;
extern const uint32_t EnemySpawner_AllMembersDead_m574782361_MetadataUsageId;
extern "C"  bool EnemySpawner_AllMembersDead_m574782361 (EnemySpawner_t2483298528 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (EnemySpawner_AllMembersDead_m574782361_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Transform_t1659122786 * V_0 = NULL;
	Il2CppObject * V_1 = NULL;
	bool V_2 = false;
	Il2CppObject * V_3 = NULL;
	Exception_t3991598821 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t3991598821 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Transform_t1659122786 * L_0 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Il2CppObject * L_1 = Transform_GetEnumerator_m688365631(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0030;
		}

IL_0011:
		{
			Il2CppObject * L_2 = V_1;
			Il2CppObject * L_3 = InterfaceFuncInvoker0< Il2CppObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t3464575207_il2cpp_TypeInfo_var, L_2);
			V_0 = ((Transform_t1659122786 *)CastclassClass(L_3, Transform_t1659122786_il2cpp_TypeInfo_var));
			Transform_t1659122786 * L_4 = V_0;
			int32_t L_5 = Transform_get_childCount_m2107810675(L_4, /*hidden argument*/NULL);
			if ((((int32_t)L_5) <= ((int32_t)0)))
			{
				goto IL_0030;
			}
		}

IL_0029:
		{
			V_2 = (bool)0;
			IL2CPP_LEAVE(0x54, FINALLY_0040);
		}

IL_0030:
		{
			Il2CppObject * L_6 = V_1;
			bool L_7 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t3464575207_il2cpp_TypeInfo_var, L_6);
			if (L_7)
			{
				goto IL_0011;
			}
		}

IL_003b:
		{
			IL2CPP_LEAVE(0x52, FINALLY_0040);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t3991598821 *)e.ex;
		goto FINALLY_0040;
	}

FINALLY_0040:
	{ // begin finally (depth: 1)
		{
			Il2CppObject * L_8 = V_1;
			V_3 = ((Il2CppObject *)IsInst(L_8, IDisposable_t1423340799_il2cpp_TypeInfo_var));
			Il2CppObject * L_9 = V_3;
			if (L_9)
			{
				goto IL_004b;
			}
		}

IL_004a:
		{
			IL2CPP_END_FINALLY(64)
		}

IL_004b:
		{
			Il2CppObject * L_10 = V_3;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t1423340799_il2cpp_TypeInfo_var, L_10);
			IL2CPP_END_FINALLY(64)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(64)
	{
		IL2CPP_JUMP_TBL(0x54, IL_0054)
		IL2CPP_JUMP_TBL(0x52, IL_0052)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t3991598821 *)
	}

IL_0052:
	{
		return (bool)1;
	}

IL_0054:
	{
		bool L_11 = V_2;
		return L_11;
	}
}
// System.Void EnemySpawner::SpawnUntilFull()
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern Il2CppClass* GameObject_t3674682005_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral997583346;
extern const uint32_t EnemySpawner_SpawnUntilFull_m1400560507_MetadataUsageId;
extern "C"  void EnemySpawner_SpawnUntilFull_m1400560507 (EnemySpawner_t2483298528 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (EnemySpawner_SpawnUntilFull_m1400560507_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Transform_t1659122786 * V_0 = NULL;
	GameObject_t3674682005 * V_1 = NULL;
	{
		Transform_t1659122786 * L_0 = EnemySpawner_NextFreePosition_m476184783(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		Transform_t1659122786 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Implicit_m2106766291(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003a;
		}
	}
	{
		GameObject_t3674682005 * L_3 = __this->get_enemyPrefab_2();
		Transform_t1659122786 * L_4 = V_0;
		Vector3_t4282066566  L_5 = Transform_get_position_m2211398607(L_4, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_6 = Quaternion_get_identity_m1743882806(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_t3071478659 * L_7 = Object_Instantiate_m2255090103(NULL /*static, unused*/, L_3, L_5, L_6, /*hidden argument*/NULL);
		V_1 = ((GameObject_t3674682005 *)IsInstSealed(L_7, GameObject_t3674682005_il2cpp_TypeInfo_var));
		GameObject_t3674682005 * L_8 = V_1;
		Transform_t1659122786 * L_9 = GameObject_get_transform_m1278640159(L_8, /*hidden argument*/NULL);
		Transform_t1659122786 * L_10 = V_0;
		Transform_set_parent_m3231272063(L_9, L_10, /*hidden argument*/NULL);
	}

IL_003a:
	{
		Transform_t1659122786 * L_11 = EnemySpawner_NextFreePosition_m476184783(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Implicit_m2106766291(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_005b;
		}
	}
	{
		float L_13 = __this->get_spawnDelay_6();
		MonoBehaviour_Invoke_m2825545578(__this, _stringLiteral997583346, L_13, /*hidden argument*/NULL);
	}

IL_005b:
	{
		return;
	}
}
// System.Void EnemySpawner::SpawnEnemies()
extern Il2CppClass* IEnumerator_t3464575207_il2cpp_TypeInfo_var;
extern Il2CppClass* Transform_t1659122786_il2cpp_TypeInfo_var;
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern Il2CppClass* GameObject_t3674682005_il2cpp_TypeInfo_var;
extern Il2CppClass* IDisposable_t1423340799_il2cpp_TypeInfo_var;
extern const uint32_t EnemySpawner_SpawnEnemies_m2286217108_MetadataUsageId;
extern "C"  void EnemySpawner_SpawnEnemies_m2286217108 (EnemySpawner_t2483298528 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (EnemySpawner_SpawnEnemies_m2286217108_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Transform_t1659122786 * V_0 = NULL;
	Il2CppObject * V_1 = NULL;
	GameObject_t3674682005 * V_2 = NULL;
	Il2CppObject * V_3 = NULL;
	Exception_t3991598821 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t3991598821 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Transform_t1659122786 * L_0 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Il2CppObject * L_1 = Transform_GetEnumerator_m688365631(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004a;
		}

IL_0011:
		{
			Il2CppObject * L_2 = V_1;
			Il2CppObject * L_3 = InterfaceFuncInvoker0< Il2CppObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t3464575207_il2cpp_TypeInfo_var, L_2);
			V_0 = ((Transform_t1659122786 *)CastclassClass(L_3, Transform_t1659122786_il2cpp_TypeInfo_var));
			GameObject_t3674682005 * L_4 = __this->get_enemyPrefab_2();
			Transform_t1659122786 * L_5 = V_0;
			Transform_t1659122786 * L_6 = Component_get_transform_m4257140443(L_5, /*hidden argument*/NULL);
			Vector3_t4282066566  L_7 = Transform_get_position_m2211398607(L_6, /*hidden argument*/NULL);
			Quaternion_t1553702882  L_8 = Quaternion_get_identity_m1743882806(NULL /*static, unused*/, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
			Object_t3071478659 * L_9 = Object_Instantiate_m2255090103(NULL /*static, unused*/, L_4, L_7, L_8, /*hidden argument*/NULL);
			V_2 = ((GameObject_t3674682005 *)IsInstSealed(L_9, GameObject_t3674682005_il2cpp_TypeInfo_var));
			GameObject_t3674682005 * L_10 = V_2;
			Transform_t1659122786 * L_11 = GameObject_get_transform_m1278640159(L_10, /*hidden argument*/NULL);
			Transform_t1659122786 * L_12 = V_0;
			Transform_set_parent_m3231272063(L_11, L_12, /*hidden argument*/NULL);
		}

IL_004a:
		{
			Il2CppObject * L_13 = V_1;
			bool L_14 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t3464575207_il2cpp_TypeInfo_var, L_13);
			if (L_14)
			{
				goto IL_0011;
			}
		}

IL_0055:
		{
			IL2CPP_LEAVE(0x6C, FINALLY_005a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t3991598821 *)e.ex;
		goto FINALLY_005a;
	}

FINALLY_005a:
	{ // begin finally (depth: 1)
		{
			Il2CppObject * L_15 = V_1;
			V_3 = ((Il2CppObject *)IsInst(L_15, IDisposable_t1423340799_il2cpp_TypeInfo_var));
			Il2CppObject * L_16 = V_3;
			if (L_16)
			{
				goto IL_0065;
			}
		}

IL_0064:
		{
			IL2CPP_END_FINALLY(90)
		}

IL_0065:
		{
			Il2CppObject * L_17 = V_3;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t1423340799_il2cpp_TypeInfo_var, L_17);
			IL2CPP_END_FINALLY(90)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(90)
	{
		IL2CPP_JUMP_TBL(0x6C, IL_006c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t3991598821 *)
	}

IL_006c:
	{
		return;
	}
}
// System.Void EnemySpawner::Update()
extern "C"  void EnemySpawner_Update_m362593458 (EnemySpawner_t2483298528 * __this, const MethodInfo* method)
{
	Vector3_t4282066566  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t4282066566  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Transform_t1659122786 * L_0 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_1 = Transform_get_position_m2211398607(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = (&V_0)->get_x_1();
		float L_3 = __this->get_xmin_8();
		if ((!(((float)L_2) <= ((float)((float)((float)L_3-(float)(0.2f)))))))
		{
			goto IL_0030;
		}
	}
	{
		__this->set_currentDirection_10(1);
		goto IL_005b;
	}

IL_0030:
	{
		Transform_t1659122786 * L_4 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_5 = Transform_get_position_m2211398607(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		float L_6 = (&V_1)->get_x_1();
		float L_7 = __this->get_xmax_7();
		if ((!(((float)L_6) >= ((float)((float)((float)L_7+(float)(0.2f)))))))
		{
			goto IL_005b;
		}
	}
	{
		__this->set_currentDirection_10(0);
	}

IL_005b:
	{
		int32_t L_8 = __this->get_currentDirection_10();
		if (L_8)
		{
			goto IL_009b;
		}
	}
	{
		Transform_t1659122786 * L_9 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Transform_t1659122786 * L_10 = L_9;
		Vector3_t4282066566  L_11 = Transform_get_position_m2211398607(L_10, /*hidden argument*/NULL);
		Vector3_t4282066566  L_12 = Vector3_get_left_m1616598929(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_13 = __this->get_speed_5();
		Vector3_t4282066566  L_14 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		float L_15 = Time_get_deltaTime_m2741110510(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t4282066566  L_16 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		Vector3_t4282066566  L_17 = Vector3_op_Addition_m695438225(NULL /*static, unused*/, L_11, L_16, /*hidden argument*/NULL);
		Transform_set_position_m3111394108(L_10, L_17, /*hidden argument*/NULL);
		goto IL_00cb;
	}

IL_009b:
	{
		Transform_t1659122786 * L_18 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Transform_t1659122786 * L_19 = L_18;
		Vector3_t4282066566  L_20 = Transform_get_position_m2211398607(L_19, /*hidden argument*/NULL);
		Vector3_t4282066566  L_21 = Vector3_get_right_m4015137012(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_22 = __this->get_speed_5();
		Vector3_t4282066566  L_23 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/NULL);
		float L_24 = Time_get_deltaTime_m2741110510(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t4282066566  L_25 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_23, L_24, /*hidden argument*/NULL);
		Vector3_t4282066566  L_26 = Vector3_op_Addition_m695438225(NULL /*static, unused*/, L_20, L_25, /*hidden argument*/NULL);
		Transform_set_position_m3111394108(L_19, L_26, /*hidden argument*/NULL);
	}

IL_00cb:
	{
		bool L_27 = EnemySpawner_AllMembersDead_m574782361(__this, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00dc;
		}
	}
	{
		EnemySpawner_SpawnUntilFull_m1400560507(__this, /*hidden argument*/NULL);
	}

IL_00dc:
	{
		return;
	}
}
// System.Void EnemySpawner::OnDrawGizmos()
extern "C"  void EnemySpawner_OnDrawGizmos_m9071365 (EnemySpawner_t2483298528 * __this, const MethodInfo* method)
{
	{
		Transform_t1659122786 * L_0 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_1 = Transform_get_position_m2211398607(L_0, /*hidden argument*/NULL);
		float L_2 = __this->get_width_4();
		float L_3 = __this->get_height_3();
		Vector3_t4282066566  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Vector3__ctor_m1846874791(&L_4, L_2, L_3, /*hidden argument*/NULL);
		Gizmos_DrawWireCube_m3014140670(NULL /*static, unused*/, L_1, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Laser::.ctor()
extern "C"  void Laser__ctor_m2435795744 (Laser_t73191083 * __this, const MethodInfo* method)
{
	{
		__this->set_Damage_2((100.0f));
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single Laser::GetDamage()
extern "C"  float Laser_GetDamage_m3081925807 (Laser_t73191083 * __this, const MethodInfo* method)
{
	{
		float L_0 = __this->get_Damage_2();
		return L_0;
	}
}
// System.Void Laser::Hit()
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern const uint32_t Laser_Hit_m1068062289_MetadataUsageId;
extern "C"  void Laser_Hit_m1068062289 (Laser_t73191083 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Laser_Hit_m1068062289_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t3674682005 * L_0 = Component_get_gameObject_m1170635899(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Destroy_m176400816(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LevelManager::.ctor()
extern "C"  void LevelManager__ctor_m4213759250 (LevelManager_t2278695849 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LevelManager::LoadLevel(System.String)
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Debug_t4195163081_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1252597096;
extern const uint32_t LevelManager_LoadLevel_m3246612564_MetadataUsageId;
extern "C"  void LevelManager_LoadLevel_m3246612564 (LevelManager_t2278695849 * __this, String_t* ___name0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (LevelManager_LoadLevel_m3246612564_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m138640077(NULL /*static, unused*/, _stringLiteral1252597096, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t4195163081_il2cpp_TypeInfo_var);
		Debug_Log_m1731103628(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___name0;
		SceneManager_LoadScene_m2167814033(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LevelManager::QuitRequest()
extern Il2CppClass* Debug_t4195163081_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3407303421;
extern const uint32_t LevelManager_QuitRequest_m3804828720_MetadataUsageId;
extern "C"  void LevelManager_QuitRequest_m3804828720 (LevelManager_t2278695849 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (LevelManager_QuitRequest_m3804828720_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t4195163081_il2cpp_TypeInfo_var);
		Debug_Log_m1731103628(NULL /*static, unused*/, _stringLiteral3407303421, /*hidden argument*/NULL);
		Application_Quit_m1187862186(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MusicPlayer::.ctor()
extern "C"  void MusicPlayer__ctor_m2214780133 (MusicPlayer_t2820681030 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MusicPlayer::.cctor()
extern "C"  void MusicPlayer__cctor_m3751578472 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void MusicPlayer::Start()
extern Il2CppClass* MusicPlayer_t2820681030_il2cpp_TypeInfo_var;
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisAudioSource_t1740077639_m3821406207_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral3527682535;
extern const uint32_t MusicPlayer_Start_m1161917925_MetadataUsageId;
extern "C"  void MusicPlayer_Start_m1161917925 (MusicPlayer_t2820681030 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (MusicPlayer_Start_m1161917925_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MusicPlayer_t2820681030_il2cpp_TypeInfo_var);
		MusicPlayer_t2820681030 * L_0 = ((MusicPlayer_t2820681030_StaticFields*)MusicPlayer_t2820681030_il2cpp_TypeInfo_var->static_fields)->get_instance_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m1296218211(NULL /*static, unused*/, L_0, (Object_t3071478659 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MusicPlayer_t2820681030_il2cpp_TypeInfo_var);
		MusicPlayer_t2820681030 * L_2 = ((MusicPlayer_t2820681030_StaticFields*)MusicPlayer_t2820681030_il2cpp_TypeInfo_var->static_fields)->get_instance_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m1296218211(NULL /*static, unused*/, L_2, __this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_003a;
		}
	}
	{
		GameObject_t3674682005 * L_4 = Component_get_gameObject_m1170635899(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Destroy_m176400816(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		MonoBehaviour_print_m1497342762(NULL /*static, unused*/, _stringLiteral3527682535, /*hidden argument*/NULL);
		goto IL_007f;
	}

IL_003a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(MusicPlayer_t2820681030_il2cpp_TypeInfo_var);
		((MusicPlayer_t2820681030_StaticFields*)MusicPlayer_t2820681030_il2cpp_TypeInfo_var->static_fields)->set_instance_2(__this);
		GameObject_t3674682005 * L_5 = Component_get_gameObject_m1170635899(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4064482788(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		AudioSource_t1740077639 * L_6 = Component_GetComponent_TisAudioSource_t1740077639_m3821406207(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t1740077639_m3821406207_MethodInfo_var);
		__this->set_music_6(L_6);
		AudioSource_t1740077639 * L_7 = __this->get_music_6();
		AudioClip_t794140988 * L_8 = __this->get_startClip_3();
		AudioSource_set_clip_m19502010(L_7, L_8, /*hidden argument*/NULL);
		AudioSource_t1740077639 * L_9 = __this->get_music_6();
		AudioSource_set_loop_m3617666708(L_9, (bool)1, /*hidden argument*/NULL);
		AudioSource_t1740077639 * L_10 = __this->get_music_6();
		AudioSource_Play_m1360558992(L_10, /*hidden argument*/NULL);
	}

IL_007f:
	{
		return;
	}
}
// System.Void MusicPlayer::OnLevelWasLoaded(System.Int32)
extern Il2CppClass* Int32_t1153838500_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Debug_t4195163081_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1893801383;
extern const uint32_t MusicPlayer_OnLevelWasLoaded_m3411372729_MetadataUsageId;
extern "C"  void MusicPlayer_OnLevelWasLoaded_m3411372729 (MusicPlayer_t2820681030 * __this, int32_t ___level0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (MusicPlayer_OnLevelWasLoaded_m3411372729_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___level0;
		int32_t L_1 = L_0;
		Il2CppObject * L_2 = Box(Int32_t1153838500_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m389863537(NULL /*static, unused*/, _stringLiteral1893801383, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t4195163081_il2cpp_TypeInfo_var);
		Debug_Log_m1731103628(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		AudioSource_t1740077639 * L_4 = __this->get_music_6();
		AudioSource_Stop_m1454243038(L_4, /*hidden argument*/NULL);
		int32_t L_5 = ___level0;
		if (L_5)
		{
			goto IL_003c;
		}
	}
	{
		AudioSource_t1740077639 * L_6 = __this->get_music_6();
		AudioClip_t794140988 * L_7 = __this->get_startClip_3();
		AudioSource_set_clip_m19502010(L_6, L_7, /*hidden argument*/NULL);
		goto IL_0071;
	}

IL_003c:
	{
		int32_t L_8 = ___level0;
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_0059;
		}
	}
	{
		AudioSource_t1740077639 * L_9 = __this->get_music_6();
		AudioClip_t794140988 * L_10 = __this->get_gameClip_4();
		AudioSource_set_clip_m19502010(L_9, L_10, /*hidden argument*/NULL);
		goto IL_0071;
	}

IL_0059:
	{
		int32_t L_11 = ___level0;
		if ((!(((uint32_t)L_11) == ((uint32_t)2))))
		{
			goto IL_0071;
		}
	}
	{
		AudioSource_t1740077639 * L_12 = __this->get_music_6();
		AudioClip_t794140988 * L_13 = __this->get_endClip_5();
		AudioSource_set_clip_m19502010(L_12, L_13, /*hidden argument*/NULL);
	}

IL_0071:
	{
		AudioSource_t1740077639 * L_14 = __this->get_music_6();
		AudioSource_set_loop_m3617666708(L_14, (bool)1, /*hidden argument*/NULL);
		AudioSource_t1740077639 * L_15 = __this->get_music_6();
		AudioSource_Play_m1360558992(L_15, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::.ctor()
extern "C"  void PlayerController__ctor_m2658519486 (PlayerController_t2866526589 * __this, const MethodInfo* method)
{
	{
		__this->set_padding_3((1.0f));
		__this->set_laserSpeed_5((3.0f));
		__this->set_firingRate_6((0.2f));
		__this->set_health_7((200.0f));
		__this->set_xmin_8((-5.0f));
		__this->set_xmax_9((5.0f));
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::Start()
extern const MethodInfo* Component_GetComponent_TisAudioSource_t1740077639_m3821406207_MethodInfo_var;
extern const uint32_t PlayerController_Start_m1605657278_MetadataUsageId;
extern "C"  void PlayerController_Start_m1605657278 (PlayerController_t2866526589 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_Start_m1605657278_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t4282066566  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t4282066566  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t4282066566  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t4282066566  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		Transform_t1659122786 * L_0 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_1 = Transform_get_position_m2211398607(L_0, /*hidden argument*/NULL);
		V_3 = L_1;
		float L_2 = (&V_3)->get_z_3();
		Camera_t2727095145 * L_3 = Camera_get_main_m671815697(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_t1659122786 * L_4 = Component_get_transform_m4257140443(L_3, /*hidden argument*/NULL);
		Vector3_t4282066566  L_5 = Transform_get_position_m2211398607(L_4, /*hidden argument*/NULL);
		V_4 = L_5;
		float L_6 = (&V_4)->get_z_3();
		V_0 = ((float)((float)L_2-(float)L_6));
		Camera_t2727095145 * L_7 = Camera_get_main_m671815697(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_8 = V_0;
		Vector3_t4282066566  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Vector3__ctor_m2926210380(&L_9, (0.0f), (0.0f), L_8, /*hidden argument*/NULL);
		Vector3_t4282066566  L_10 = Camera_ViewportToWorldPoint_m1641213412(L_7, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		Camera_t2727095145 * L_11 = Camera_get_main_m671815697(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_12 = V_0;
		Vector3_t4282066566  L_13;
		memset(&L_13, 0, sizeof(L_13));
		Vector3__ctor_m2926210380(&L_13, (1.0f), (0.0f), L_12, /*hidden argument*/NULL);
		Vector3_t4282066566  L_14 = Camera_ViewportToWorldPoint_m1641213412(L_11, L_13, /*hidden argument*/NULL);
		V_2 = L_14;
		float L_15 = (&V_1)->get_x_1();
		float L_16 = __this->get_padding_3();
		__this->set_xmin_8(((float)((float)L_15+(float)L_16)));
		float L_17 = (&V_2)->get_x_1();
		float L_18 = __this->get_padding_3();
		__this->set_xmax_9(((float)((float)L_17-(float)L_18)));
		AudioSource_t1740077639 * L_19 = Component_GetComponent_TisAudioSource_t1740077639_m3821406207(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t1740077639_m3821406207_MethodInfo_var);
		__this->set_soundPlayer_12(L_19);
		return;
	}
}
// System.Void PlayerController::Pewpew()
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern Il2CppClass* GameObject_t3674682005_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisRigidbody2D_t1743771669_m3829971481_MethodInfo_var;
extern const uint32_t PlayerController_Pewpew_m1797241670_MetadataUsageId;
extern "C"  void PlayerController_Pewpew_m1797241670 (PlayerController_t2866526589 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_Pewpew_m1797241670_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t3674682005 * V_0 = NULL;
	Vector3_t4282066566  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		AudioSource_t1740077639 * L_0 = __this->get_soundPlayer_12();
		AudioClip_t794140988 * L_1 = __this->get_laserShot_10();
		AudioSource_PlayOneShot_m823779350(L_0, L_1, (0.5f), /*hidden argument*/NULL);
		GameObject_t3674682005 * L_2 = __this->get_laser_4();
		Transform_t1659122786 * L_3 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_4 = Transform_get_position_m2211398607(L_3, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_5 = Quaternion_get_identity_m1743882806(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_t3071478659 * L_6 = Object_Instantiate_m2255090103(NULL /*static, unused*/, L_2, L_4, L_5, /*hidden argument*/NULL);
		V_0 = ((GameObject_t3674682005 *)IsInstSealed(L_6, GameObject_t3674682005_il2cpp_TypeInfo_var));
		GameObject_t3674682005 * L_7 = V_0;
		Rigidbody2D_t1743771669 * L_8 = GameObject_GetComponent_TisRigidbody2D_t1743771669_m3829971481(L_7, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_t1743771669_m3829971481_MethodInfo_var);
		float L_9 = __this->get_laserSpeed_5();
		Transform_t1659122786 * L_10 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_11 = Transform_get_position_m2211398607(L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		float L_12 = (&V_1)->get_z_3();
		Vector3_t4282066566  L_13;
		memset(&L_13, 0, sizeof(L_13));
		Vector3__ctor_m2926210380(&L_13, (0.0f), L_9, L_12, /*hidden argument*/NULL);
		Vector2_t4282066565  L_14 = Vector2_op_Implicit_m4083860659(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m100625302(L_8, L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::Update()
extern Il2CppClass* Input_t4200062272_il2cpp_TypeInfo_var;
extern Il2CppClass* Mathf_t4203372500_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2387263712;
extern const uint32_t PlayerController_Update_m2536587535_MetadataUsageId;
extern "C"  void PlayerController_Update_m2536587535 (PlayerController_t2866526589 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_Update_m2536587535_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t4282066566  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t4282066566  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t4282066566  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetKey_m1349175653(NULL /*static, unused*/, ((int32_t)276), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0044;
		}
	}
	{
		Transform_t1659122786 * L_1 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Transform_t1659122786 * L_2 = L_1;
		Vector3_t4282066566  L_3 = Transform_get_position_m2211398607(L_2, /*hidden argument*/NULL);
		Vector3_t4282066566  L_4 = Vector3_get_left_m1616598929(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_5 = __this->get_throttle_2();
		Vector3_t4282066566  L_6 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		float L_7 = Time_get_deltaTime_m2741110510(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t4282066566  L_8 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		Vector3_t4282066566  L_9 = Vector3_op_Addition_m695438225(NULL /*static, unused*/, L_3, L_8, /*hidden argument*/NULL);
		Transform_set_position_m3111394108(L_2, L_9, /*hidden argument*/NULL);
		goto IL_0083;
	}

IL_0044:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		bool L_10 = Input_GetKey_m1349175653(NULL /*static, unused*/, ((int32_t)275), /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0083;
		}
	}
	{
		Transform_t1659122786 * L_11 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Transform_t1659122786 * L_12 = L_11;
		Vector3_t4282066566  L_13 = Transform_get_position_m2211398607(L_12, /*hidden argument*/NULL);
		Vector3_t4282066566  L_14 = Vector3_get_right_m4015137012(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_15 = __this->get_throttle_2();
		Vector3_t4282066566  L_16 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		float L_17 = Time_get_deltaTime_m2741110510(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t4282066566  L_18 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_16, L_17, /*hidden argument*/NULL);
		Vector3_t4282066566  L_19 = Vector3_op_Addition_m695438225(NULL /*static, unused*/, L_13, L_18, /*hidden argument*/NULL);
		Transform_set_position_m3111394108(L_12, L_19, /*hidden argument*/NULL);
	}

IL_0083:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		bool L_20 = Input_GetKeyDown_m2928824675(NULL /*static, unused*/, ((int32_t)32), /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00a5;
		}
	}
	{
		float L_21 = __this->get_firingRate_6();
		MonoBehaviour_InvokeRepeating_m1115468640(__this, _stringLiteral2387263712, (0.0001f), L_21, /*hidden argument*/NULL);
	}

IL_00a5:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		bool L_22 = Input_GetKeyUp_m2739135306(NULL /*static, unused*/, ((int32_t)32), /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00bc;
		}
	}
	{
		MonoBehaviour_CancelInvoke_m2461959659(__this, _stringLiteral2387263712, /*hidden argument*/NULL);
	}

IL_00bc:
	{
		Transform_t1659122786 * L_23 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_24 = Transform_get_position_m2211398607(L_23, /*hidden argument*/NULL);
		V_1 = L_24;
		float L_25 = (&V_1)->get_x_1();
		float L_26 = __this->get_xmin_8();
		float L_27 = __this->get_xmax_9();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4203372500_il2cpp_TypeInfo_var);
		float L_28 = Mathf_Clamp_m3872743893(NULL /*static, unused*/, L_25, L_26, L_27, /*hidden argument*/NULL);
		V_0 = L_28;
		Transform_t1659122786 * L_29 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		float L_30 = V_0;
		Transform_t1659122786 * L_31 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_32 = Transform_get_position_m2211398607(L_31, /*hidden argument*/NULL);
		V_2 = L_32;
		float L_33 = (&V_2)->get_y_2();
		Transform_t1659122786 * L_34 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_35 = Transform_get_position_m2211398607(L_34, /*hidden argument*/NULL);
		V_3 = L_35;
		float L_36 = (&V_3)->get_z_3();
		Vector3_t4282066566  L_37;
		memset(&L_37, 0, sizeof(L_37));
		Vector3__ctor_m2926210380(&L_37, L_30, L_33, L_36, /*hidden argument*/NULL);
		Transform_set_position_m3111394108(L_29, L_37, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::OnTriggerEnter2D(UnityEngine.Collider2D)
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisLaser_t73191083_m3882464470_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisLevelManager_t2278695849_m3017959828_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral2278695849;
extern Il2CppCodeGenString* _stringLiteral2816103792;
extern const uint32_t PlayerController_OnTriggerEnter2D_m2428503418_MetadataUsageId;
extern "C"  void PlayerController_OnTriggerEnter2D_m2428503418 (PlayerController_t2866526589 * __this, Collider2D_t1552025098 * ___col0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_OnTriggerEnter2D_m2428503418_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Laser_t73191083 * V_0 = NULL;
	LevelManager_t2278695849 * V_1 = NULL;
	{
		Collider2D_t1552025098 * L_0 = ___col0;
		GameObject_t3674682005 * L_1 = Component_get_gameObject_m1170635899(L_0, /*hidden argument*/NULL);
		Laser_t73191083 * L_2 = GameObject_GetComponent_TisLaser_t73191083_m3882464470(L_1, /*hidden argument*/GameObject_GetComponent_TisLaser_t73191083_m3882464470_MethodInfo_var);
		V_0 = L_2;
		Laser_t73191083 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Implicit_m2106766291(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0085;
		}
	}
	{
		float L_5 = __this->get_health_7();
		Laser_t73191083 * L_6 = V_0;
		float L_7 = Laser_GetDamage_m3081925807(L_6, /*hidden argument*/NULL);
		__this->set_health_7(((float)((float)L_5-(float)L_7)));
		Laser_t73191083 * L_8 = V_0;
		Laser_Hit_m1068062289(L_8, /*hidden argument*/NULL);
		float L_9 = __this->get_health_7();
		if ((!(((float)L_9) <= ((float)(0.0f)))))
		{
			goto IL_0085;
		}
	}
	{
		GameObject_t3674682005 * L_10 = Component_get_gameObject_m1170635899(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Destroy_m176400816(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		AudioClip_t794140988 * L_11 = __this->get_explosion_11();
		Vector3_t4282066566  L_12;
		memset(&L_12, 0, sizeof(L_12));
		Vector3__ctor_m2926210380(&L_12, (0.0f), (0.0f), (-7.0f), /*hidden argument*/NULL);
		AudioSource_PlayClipAtPoint_m2719680311(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_13 = GameObject_Find_m332785498(NULL /*static, unused*/, _stringLiteral2278695849, /*hidden argument*/NULL);
		LevelManager_t2278695849 * L_14 = GameObject_GetComponent_TisLevelManager_t2278695849_m3017959828(L_13, /*hidden argument*/GameObject_GetComponent_TisLevelManager_t2278695849_m3017959828_MethodInfo_var);
		V_1 = L_14;
		LevelManager_t2278695849 * L_15 = V_1;
		LevelManager_LoadLevel_m3246612564(L_15, _stringLiteral2816103792, /*hidden argument*/NULL);
	}

IL_0085:
	{
		return;
	}
}
// System.Void Position::.ctor()
extern "C"  void Position__ctor_m3478233970 (Position_t812449097 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Position::Start()
extern "C"  void Position_Start_m2425371762 (Position_t812449097 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Position::Update()
extern "C"  void Position_Update_m2177932763 (Position_t812449097 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Position::OnDrawGizmos()
extern "C"  void Position_OnDrawGizmos_m225511790 (Position_t812449097 * __this, const MethodInfo* method)
{
	{
		Transform_t1659122786 * L_0 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_1 = Transform_get_position_m2211398607(L_0, /*hidden argument*/NULL);
		Gizmos_DrawWireSphere_m2407913464(NULL /*static, unused*/, L_1, (1.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScoreDisplay::.ctor()
extern "C"  void ScoreDisplay__ctor_m1876099755 (ScoreDisplay_t3356466672 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScoreDisplay::Start()
extern Il2CppClass* ScoreKeeper_t2936965124_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisText_t9039225_m1610753993_MethodInfo_var;
extern const uint32_t ScoreDisplay_Start_m823237547_MetadataUsageId;
extern "C"  void ScoreDisplay_Start_m823237547 (ScoreDisplay_t3356466672 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ScoreDisplay_Start_m823237547_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Text_t9039225 * V_0 = NULL;
	{
		Text_t9039225 * L_0 = Component_GetComponent_TisText_t9039225_m1610753993(__this, /*hidden argument*/Component_GetComponent_TisText_t9039225_m1610753993_MethodInfo_var);
		V_0 = L_0;
		Text_t9039225 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ScoreKeeper_t2936965124_il2cpp_TypeInfo_var);
		String_t* L_2 = Int32_ToString_m1286526384((((ScoreKeeper_t2936965124_StaticFields*)ScoreKeeper_t2936965124_il2cpp_TypeInfo_var->static_fields)->get_address_of_score_3()), /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_2);
		ScoreKeeper_Reset_m4241695380(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScoreDisplay::Update()
extern "C"  void ScoreDisplay_Update_m4051379650 (ScoreDisplay_t3356466672 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void ScoreKeeper::.ctor()
extern "C"  void ScoreKeeper__ctor_m2300295143 (ScoreKeeper_t2936965124 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScoreKeeper::.cctor()
extern "C"  void ScoreKeeper__cctor_m2107576486 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void ScoreKeeper::Awake()
extern Il2CppClass* ScoreKeeper_t2936965124_il2cpp_TypeInfo_var;
extern const uint32_t ScoreKeeper_Awake_m2537900362_MetadataUsageId;
extern "C"  void ScoreKeeper_Awake_m2537900362 (ScoreKeeper_t2936965124 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ScoreKeeper_Awake_m2537900362_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ScoreKeeper_t2936965124_il2cpp_TypeInfo_var);
		((ScoreKeeper_t2936965124_StaticFields*)ScoreKeeper_t2936965124_il2cpp_TypeInfo_var->static_fields)->set_instance_4(__this);
		return;
	}
}
// System.Void ScoreKeeper::Start()
extern Il2CppClass* ScoreKeeper_t2936965124_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisText_t9039225_m1610753993_MethodInfo_var;
extern const uint32_t ScoreKeeper_Start_m1247432935_MetadataUsageId;
extern "C"  void ScoreKeeper_Start_m1247432935 (ScoreKeeper_t2936965124 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ScoreKeeper_Start_m1247432935_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Text_t9039225 * L_0 = Component_GetComponent_TisText_t9039225_m1610753993(__this, /*hidden argument*/Component_GetComponent_TisText_t9039225_m1610753993_MethodInfo_var);
		__this->set_text_2(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(ScoreKeeper_t2936965124_il2cpp_TypeInfo_var);
		ScoreKeeper_Reset_m4241695380(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScoreKeeper::Reset()
extern Il2CppClass* ScoreKeeper_t2936965124_il2cpp_TypeInfo_var;
extern const uint32_t ScoreKeeper_Reset_m4241695380_MetadataUsageId;
extern "C"  void ScoreKeeper_Reset_m4241695380 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ScoreKeeper_Reset_m4241695380_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ScoreKeeper_t2936965124_il2cpp_TypeInfo_var);
		((ScoreKeeper_t2936965124_StaticFields*)ScoreKeeper_t2936965124_il2cpp_TypeInfo_var->static_fields)->set_score_3(0);
		ScoreKeeper_t2936965124 * L_0 = ((ScoreKeeper_t2936965124_StaticFields*)ScoreKeeper_t2936965124_il2cpp_TypeInfo_var->static_fields)->get_instance_4();
		Text_t9039225 * L_1 = L_0->get_text_2();
		String_t* L_2 = Int32_ToString_m1286526384((((ScoreKeeper_t2936965124_StaticFields*)ScoreKeeper_t2936965124_il2cpp_TypeInfo_var->static_fields)->get_address_of_score_3()), /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_2);
		return;
	}
}
// System.Void ScoreKeeper::Score(System.Int32)
extern Il2CppClass* ScoreKeeper_t2936965124_il2cpp_TypeInfo_var;
extern const uint32_t ScoreKeeper_Score_m3957967336_MetadataUsageId;
extern "C"  void ScoreKeeper_Score_m3957967336 (ScoreKeeper_t2936965124 * __this, int32_t ___points0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ScoreKeeper_Score_m3957967336_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ScoreKeeper_t2936965124_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ScoreKeeper_t2936965124_StaticFields*)ScoreKeeper_t2936965124_il2cpp_TypeInfo_var->static_fields)->get_score_3();
		int32_t L_1 = ___points0;
		((ScoreKeeper_t2936965124_StaticFields*)ScoreKeeper_t2936965124_il2cpp_TypeInfo_var->static_fields)->set_score_3(((int32_t)((int32_t)L_0+(int32_t)L_1)));
		Text_t9039225 * L_2 = __this->get_text_2();
		String_t* L_3 = Int32_ToString_m1286526384((((ScoreKeeper_t2936965124_StaticFields*)ScoreKeeper_t2936965124_il2cpp_TypeInfo_var->static_fields)->get_address_of_score_3()), /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_3);
		return;
	}
}
// System.Void Shredder::.ctor()
extern "C"  void Shredder__ctor_m2794308006 (Shredder_t4090516629 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Shredder::Start()
extern "C"  void Shredder_Start_m1741445798 (Shredder_t4090516629 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Shredder::Update()
extern "C"  void Shredder_Update_m2451064359 (Shredder_t4090516629 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Shredder::OnTriggerEnter2D(UnityEngine.Collider2D)
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern const uint32_t Shredder_OnTriggerEnter2D_m848079506_MetadataUsageId;
extern "C"  void Shredder_OnTriggerEnter2D_m848079506 (Shredder_t4090516629 * __this, Collider2D_t1552025098 * ___col0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Shredder_OnTriggerEnter2D_m848079506_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Collider2D_t1552025098 * L_0 = ___col0;
		GameObject_t3674682005 * L_1 = Component_get_gameObject_m1170635899(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Destroy_m176400816(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

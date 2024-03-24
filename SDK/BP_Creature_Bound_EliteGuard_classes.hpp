#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x47 (0x16B0 - 0x1669)
// BlueprintGeneratedClass BP_Creature_Bound_EliteGuard.BP_Creature_Bound_EliteGuard_C
class ABP_Creature_Bound_EliteGuard_C : public ABP_Creature_Bound_C
{
public:
	uint8                                        Pad_1962[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraComponent*                     WP_Indicator;                                      // 0x1670(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    Ak_Hand_L;                                         // 0x1678(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    Ak_Foot_Left;                                      // 0x1680(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    Ak_Hand_R;                                         // 0x1688(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    Ak_Foot_Right;                                     // 0x1690(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    Ak_Body;                                           // 0x1698(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    Ak_Head;                                           // 0x16A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x16A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Creature_Bound_EliteGuard_C* GetDefaultObj();

	void Start_WP_Indicator();
};

}



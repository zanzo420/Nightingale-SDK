#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x13F (0x17A8 - 0x1669)
// BlueprintGeneratedClass BP_Creature_Bound_FaeAssassin.BP_Creature_Bound_FaeAssassin_C
class ABP_Creature_Bound_FaeAssassin_C : public ABP_Creature_Bound_C
{
public:
	uint8                                        Pad_A4E6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1670(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     WP_Indicator1;                                     // 0x1678(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    Ak_Foot_R;                                         // 0x1680(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    Ak_Foot_L;                                         // 0x1688(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    Ak_Hand_R;                                         // 0x1690(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    Ak_Hand_L;                                         // 0x1698(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    Ak_Body;                                           // 0x16A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    Ak_Head;                                           // 0x16A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SwordRH;                                           // 0x16B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SwordLH;                                           // 0x16B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_Creature_Bound_EliteGuard_C*       EliteGuard;                                        // 0x16C0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A4E7[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            BladeProjectileRight;                              // 0x16D0(0x60)(Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            BladeProjectileLeft;                               // 0x1730(0x60)(Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CreatureProjectile_Fae_ReturningBlade_C* ProjectileR;                                       // 0x1790(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class ABP_CreatureProjectile_Fae_ReturningBlade_C* ProjectileL;                                       // 0x1798(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class UObject*                               BoundSpawner;                                      // 0x17A0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Creature_Bound_FaeAssassin_C* GetDefaultObj();

	void Start_WP_Indicator();
	void StopBladeSFXRight(bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_PostAkEventScoped_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void StopBladeSFXLeft(bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_PostAkEventScoped_ReturnValue);
	void EliteGuardDeath(class ANWXAICharacter* Creature);
	void EliteGuardDestroyed(class AActor* DestroyedActor);
	void ExecuteUbergraph_BP_Creature_Bound_FaeAssassin(int32 EntryPoint, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, bool Temp_bool_IsClosed_Variable, class ANWXAICharacter* K2Node_CustomEvent_Creature, class AActor* K2Node_CustomEvent_DestroyedActor, bool Temp_bool_Has_Been_Initd_Variable);
};

}



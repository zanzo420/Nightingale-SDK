#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x180 - 0x178)
// BlueprintGeneratedClass AIA_Creature_Combat_Minion_POITargets.AIA_Creature_Combat_Minion_POITargets_C
class UAIA_Creature_Combat_Minion_POITargets_C : public UAIA_Creature_Combat_CasterMiasma_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x178(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAIA_Creature_Combat_Minion_POITargets_C* GetDefaultObj();

	bool CheckOwnerRequirements(double LMinRange, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsAnyPlayerInRadius_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_IsAnyPlayerInRadius_Radius_ImplicitCast);
	bool CheckStaticTargetRequirements(class AActor* Target, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void Start(class AActor* Target);
	void ExecuteUbergraph_AIA_Creature_Combat_Minion_POITargets(int32 EntryPoint, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class AActor* K2Node_Event_Target, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}



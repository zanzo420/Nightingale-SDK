#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x19 (0x561 - 0x548)
// BlueprintGeneratedClass GA_CreatureAbility_Melee_Jump.GA_CreatureAbility_Melee_Jump_C
class UGA_CreatureAbility_Melee_Jump_C : public UGA_CreatureAbility_Melee_01_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x548(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UAnimMontage*>                  JumpingMontages;                                   // 0x550(0x10)(Edit, BlueprintVisible)
	bool                                         TargetOffNavmesh;                                  // 0x560(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_CreatureAbility_Melee_Jump_C* GetDefaultObj();

	void Jump_Query_Finished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus, TArray<struct FVector>& CallFunc_GetQueryResultsAsLocations_ResultLocations, bool CallFunc_GetQueryResultsAsLocations_ReturnValue, const struct FVector& CallFunc_Array_Get_Item, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TScriptInterface<class IBPI_Targeter_C> CallFunc_GetTarget_self_CastInput, class AActor* CallFunc_GetTarget_Target, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue);
	void SelectMontage(const struct FTransform& TargetTransform, class UAnimMontage** SelectedMontage, class UAnimMontage* CallFunc_SelectMontage_SelectedMontage, class UAnimMontage* CallFunc_SelectMontageNearTarget_ReturnValue);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_CreatureAbility_Melee_Jump(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UEnvQueryInstanceBlueprintWrapper* CallFunc_RunEQSQuery_ReturnValue);
};

}



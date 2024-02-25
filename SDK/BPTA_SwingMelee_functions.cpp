#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPTA_SwingMelee.BPTA_SwingMelee_C
// (Actor)

class UClass* ABPTA_SwingMelee_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPTA_SwingMelee_C");

	return Clss;
}


// BPTA_SwingMelee_C BPTA_SwingMelee.Default__BPTA_SwingMelee_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPTA_SwingMelee_C* ABPTA_SwingMelee_C::GetDefaultObj()
{
	static class ABPTA_SwingMelee_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPTA_SwingMelee_C*>(ABPTA_SwingMelee_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPTA_SwingMelee.BPTA_SwingMelee_C.ResetImpact
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimInstance*               CallFunc_Get_Anim_Info_FPAnimInstance                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_Get_Anim_Info_FPActiveMontage                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Get_Anim_Info_FPCurrentSectionName                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_Get_Anim_Info_TPAnimInstance                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_Get_Anim_Info_TPActiveMontage                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Get_Anim_Info_TPCurrentSectionName                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTA_SwingMelee_C::ResetImpact(class UAnimInstance* CallFunc_Get_Anim_Info_FPAnimInstance, class UAnimMontage* CallFunc_Get_Anim_Info_FPActiveMontage, class FName CallFunc_Get_Anim_Info_FPCurrentSectionName, class UAnimInstance* CallFunc_Get_Anim_Info_TPAnimInstance, class UAnimMontage* CallFunc_Get_Anim_Info_TPActiveMontage, class FName CallFunc_Get_Anim_Info_TPCurrentSectionName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_SwingMelee_C", "ResetImpact");

	Params::ABPTA_SwingMelee_C_ResetImpact_Params Parms{};

	Parms.CallFunc_Get_Anim_Info_FPAnimInstance = CallFunc_Get_Anim_Info_FPAnimInstance;
	Parms.CallFunc_Get_Anim_Info_FPActiveMontage = CallFunc_Get_Anim_Info_FPActiveMontage;
	Parms.CallFunc_Get_Anim_Info_FPCurrentSectionName = CallFunc_Get_Anim_Info_FPCurrentSectionName;
	Parms.CallFunc_Get_Anim_Info_TPAnimInstance = CallFunc_Get_Anim_Info_TPAnimInstance;
	Parms.CallFunc_Get_Anim_Info_TPActiveMontage = CallFunc_Get_Anim_Info_TPActiveMontage;
	Parms.CallFunc_Get_Anim_Info_TPCurrentSectionName = CallFunc_Get_Anim_Info_TPCurrentSectionName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTA_SwingMelee.BPTA_SwingMelee_C.HandleDualCombo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_MeleeComponent_C*        CallFunc_GetMeleeComponent_MeleeComponent                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDualCombo_TEMP_InDualComboWindow                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetDualCombo_TEMP_DualComboSection                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTA_SwingMelee_C::HandleDualCombo(class UBP_MeleeComponent_C* CallFunc_GetMeleeComponent_MeleeComponent, bool CallFunc_GetDualCombo_TEMP_InDualComboWindow, class FName CallFunc_GetDualCombo_TEMP_DualComboSection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_SwingMelee_C", "HandleDualCombo");

	Params::ABPTA_SwingMelee_C_HandleDualCombo_Params Parms{};

	Parms.CallFunc_GetMeleeComponent_MeleeComponent = CallFunc_GetMeleeComponent_MeleeComponent;
	Parms.CallFunc_GetDualCombo_TEMP_InDualComboWindow = CallFunc_GetDualCombo_TEMP_InDualComboWindow;
	Parms.CallFunc_GetDualCombo_TEMP_DualComboSection = CallFunc_GetDualCombo_TEMP_DualComboSection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTA_SwingMelee.BPTA_SwingMelee_C.InitializeSocketTraceComponent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseSecondaryItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CreatureSocketTraceComponent_C*OldSocketTraceComponent                                          (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CreatureSocketTraceComponent_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CreatureSocketTraceComponent_C*CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABPTA_SwingMelee_C::InitializeSocketTraceComponent(bool UseSecondaryItem, class UBP_CreatureSocketTraceComponent_C* OldSocketTraceComponent, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_1, class UBP_CreatureSocketTraceComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class UBP_CreatureSocketTraceComponent_C* CallFunc_GetComponentByClass_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_SwingMelee_C", "InitializeSocketTraceComponent");

	Params::ABPTA_SwingMelee_C_InitializeSocketTraceComponent_Params Parms{};

	Parms.UseSecondaryItem = UseSecondaryItem;
	Parms.OldSocketTraceComponent = OldSocketTraceComponent;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTA_SwingMelee.BPTA_SwingMelee_C.GetThirdPersonEnabled
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsEnabled                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerCameraManager*     CallFunc_GetCameraManager_CameraManager                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetThirdPersonEnabled_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTA_SwingMelee_C::GetThirdPersonEnabled(bool* bIsEnabled, bool CallFunc_IsValid_ReturnValue, class ANWXPlayerCameraManager* CallFunc_GetCameraManager_CameraManager, bool CallFunc_GetThirdPersonEnabled_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_SwingMelee_C", "GetThirdPersonEnabled");

	Params::ABPTA_SwingMelee_C_GetThirdPersonEnabled_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCameraManager_CameraManager = CallFunc_GetCameraManager_CameraManager;
	Parms.CallFunc_GetThirdPersonEnabled_ReturnValue = CallFunc_GetThirdPersonEnabled_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsEnabled != nullptr)
		*bIsEnabled = Parms.bIsEnabled;

}


// Function BPTA_SwingMelee.BPTA_SwingMelee_C.ShouldCombo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleCallFunc_GetContextFromOwner_ReturnValue                         (None)
// int32                              CallFunc_GetAbilityLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UGameplayEffect> CallFunc_GetCostGameplayEffectClass_ReturnValue                  (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanApplyAttributeModifiers_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsActionInputPressed_Is_Pressed                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CanApplyAttributeModifiers_Level_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABPTA_SwingMelee_C::ShouldCombo(const struct FGameplayEffectContextHandle& CallFunc_GetContextFromOwner_ReturnValue, int32 CallFunc_GetAbilityLevel_ReturnValue, TSubclassOf<class UGameplayEffect> CallFunc_GetCostGameplayEffectClass_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, bool CallFunc_CanApplyAttributeModifiers_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsActionInputPressed_Is_Pressed, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, float CallFunc_CanApplyAttributeModifiers_Level_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_SwingMelee_C", "ShouldCombo");

	Params::ABPTA_SwingMelee_C_ShouldCombo_Params Parms{};

	Parms.CallFunc_GetContextFromOwner_ReturnValue = CallFunc_GetContextFromOwner_ReturnValue;
	Parms.CallFunc_GetAbilityLevel_ReturnValue = CallFunc_GetAbilityLevel_ReturnValue;
	Parms.CallFunc_GetCostGameplayEffectClass_ReturnValue = CallFunc_GetCostGameplayEffectClass_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_CanApplyAttributeModifiers_ReturnValue = CallFunc_CanApplyAttributeModifiers_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsActionInputPressed_Is_Pressed = CallFunc_IsActionInputPressed_Is_Pressed;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_CanApplyAttributeModifiers_Level_ImplicitCast = CallFunc_CanApplyAttributeModifiers_Level_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPTA_SwingMelee.BPTA_SwingMelee_C.FirstHitLogic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHitObjectGround_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPointWithinXYAngleInFrontOfFPCamera_ReturnValue       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTA_SwingMelee_C::FirstHitLogic(bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_IsHitObjectGround_ReturnValue, bool CallFunc_IsPointWithinXYAngleInFrontOfFPCamera_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_SwingMelee_C", "FirstHitLogic");

	Params::ABPTA_SwingMelee_C_FirstHitLogic_Params Parms{};

	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_BoneName = CallFunc_BreakHitResult_BoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = CallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_IsHitObjectGround_ReturnValue = CallFunc_IsHitObjectGround_ReturnValue;
	Parms.CallFunc_IsPointWithinXYAngleInFrontOfFPCamera_ReturnValue = CallFunc_IsPointWithinXYAngleInFrontOfFPCamera_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTA_SwingMelee.BPTA_SwingMelee_C.CallPredictHit
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ThirdPersonEnabled                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                SelectedActiveMontage                                            (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      SelectedWeaponMesh                                               (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetThirdPersonEnabled_bIsEnabled                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MatchesTag_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_Get_Anim_Info_FPAnimInstance                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_Get_Anim_Info_FPActiveMontage                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Get_Anim_Info_FPCurrentSectionName                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_Get_Anim_Info_TPAnimInstance                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_Get_Anim_Info_TPActiveMontage                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Get_Anim_Info_TPCurrentSectionName                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayTag>        CallFunc_GetInteractionTags_InteractionTags                      (ReferenceParm)
// struct FGameplayTagContainer       CallFunc_MakeGameplayTagContainerFromArray_ReturnValue           (None)
// double                             CallFunc_Get_Trace_Radius_Radius                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPredictedHitResultsData    CallFunc_PredictMeleeHits_OutHitResults                          (ContainsInstancedReference)
// float                              CallFunc_PredictMeleeHits_ForwardTraceRadiusScale_ImplicitCast   (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PredictMeleeHits_TraceRadius_ImplicitCast               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTA_SwingMelee_C::CallPredictHit(bool ThirdPersonEnabled, class UAnimMontage* SelectedActiveMontage, class USkeletalMeshComponent* SelectedWeaponMesh, bool CallFunc_GetThirdPersonEnabled_bIsEnabled, bool CallFunc_MatchesTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UAnimInstance* CallFunc_Get_Anim_Info_FPAnimInstance, class UAnimMontage* CallFunc_Get_Anim_Info_FPActiveMontage, class FName CallFunc_Get_Anim_Info_FPCurrentSectionName, class UAnimInstance* CallFunc_Get_Anim_Info_TPAnimInstance, class UAnimMontage* CallFunc_Get_Anim_Info_TPActiveMontage, class FName CallFunc_Get_Anim_Info_TPCurrentSectionName, TArray<struct FGameplayTag>& CallFunc_GetInteractionTags_InteractionTags, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromArray_ReturnValue, double CallFunc_Get_Trace_Radius_Radius, const struct FPredictedHitResultsData& CallFunc_PredictMeleeHits_OutHitResults, float CallFunc_PredictMeleeHits_ForwardTraceRadiusScale_ImplicitCast, float CallFunc_PredictMeleeHits_TraceRadius_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_SwingMelee_C", "CallPredictHit");

	Params::ABPTA_SwingMelee_C_CallPredictHit_Params Parms{};

	Parms.ThirdPersonEnabled = ThirdPersonEnabled;
	Parms.SelectedActiveMontage = SelectedActiveMontage;
	Parms.SelectedWeaponMesh = SelectedWeaponMesh;
	Parms.CallFunc_GetThirdPersonEnabled_bIsEnabled = CallFunc_GetThirdPersonEnabled_bIsEnabled;
	Parms.CallFunc_MatchesTag_ReturnValue = CallFunc_MatchesTag_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Get_Anim_Info_FPAnimInstance = CallFunc_Get_Anim_Info_FPAnimInstance;
	Parms.CallFunc_Get_Anim_Info_FPActiveMontage = CallFunc_Get_Anim_Info_FPActiveMontage;
	Parms.CallFunc_Get_Anim_Info_FPCurrentSectionName = CallFunc_Get_Anim_Info_FPCurrentSectionName;
	Parms.CallFunc_Get_Anim_Info_TPAnimInstance = CallFunc_Get_Anim_Info_TPAnimInstance;
	Parms.CallFunc_Get_Anim_Info_TPActiveMontage = CallFunc_Get_Anim_Info_TPActiveMontage;
	Parms.CallFunc_Get_Anim_Info_TPCurrentSectionName = CallFunc_Get_Anim_Info_TPCurrentSectionName;
	Parms.CallFunc_GetInteractionTags_InteractionTags = CallFunc_GetInteractionTags_InteractionTags;
	Parms.CallFunc_MakeGameplayTagContainerFromArray_ReturnValue = CallFunc_MakeGameplayTagContainerFromArray_ReturnValue;
	Parms.CallFunc_Get_Trace_Radius_Radius = CallFunc_Get_Trace_Radius_Radius;
	Parms.CallFunc_PredictMeleeHits_OutHitResults = CallFunc_PredictMeleeHits_OutHitResults;
	Parms.CallFunc_PredictMeleeHits_ForwardTraceRadiusScale_ImplicitCast = CallFunc_PredictMeleeHits_ForwardTraceRadiusScale_ImplicitCast;
	Parms.CallFunc_PredictMeleeHits_TraceRadius_ImplicitCast = CallFunc_PredictMeleeHits_TraceRadius_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTA_SwingMelee.BPTA_SwingMelee_C.Get Anim Info
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimInstance*               FPAnimInstance                                                   (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                FPActiveMontage                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        FPCurrentSectionName                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               TPAnimInstance                                                   (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                TPActiveMontage                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        TPCurrentSectionName                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetSK_HMM_FP_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetTPMesh_SkeletalMesh                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Montage_GetCurrentSection_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Montage_GetCurrentSection_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTA_SwingMelee_C::Get_Anim_Info(class UAnimInstance** FPAnimInstance, class UAnimMontage** FPActiveMontage, class FName* FPCurrentSectionName, class UAnimInstance** TPAnimInstance, class UAnimMontage** TPActiveMontage, class FName* TPCurrentSectionName, class USkeletalMeshComponent* CallFunc_GetSK_HMM_FP_ReturnValue, class USkeletalMeshComponent* CallFunc_GetTPMesh_SkeletalMesh, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, class FName CallFunc_Montage_GetCurrentSection_ReturnValue, class FName CallFunc_Montage_GetCurrentSection_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_SwingMelee_C", "Get Anim Info");

	Params::ABPTA_SwingMelee_C_Get_Anim_Info_Params Parms{};

	Parms.CallFunc_GetSK_HMM_FP_ReturnValue = CallFunc_GetSK_HMM_FP_ReturnValue;
	Parms.CallFunc_GetTPMesh_SkeletalMesh = CallFunc_GetTPMesh_SkeletalMesh;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue_1 = CallFunc_GetAnimInstance_ReturnValue_1;
	Parms.CallFunc_Montage_GetCurrentSection_ReturnValue = CallFunc_Montage_GetCurrentSection_ReturnValue;
	Parms.CallFunc_Montage_GetCurrentSection_ReturnValue_1 = CallFunc_Montage_GetCurrentSection_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (FPAnimInstance != nullptr)
		*FPAnimInstance = Parms.FPAnimInstance;

	if (FPActiveMontage != nullptr)
		*FPActiveMontage = Parms.FPActiveMontage;

	if (FPCurrentSectionName != nullptr)
		*FPCurrentSectionName = Parms.FPCurrentSectionName;

	if (TPAnimInstance != nullptr)
		*TPAnimInstance = Parms.TPAnimInstance;

	if (TPActiveMontage != nullptr)
		*TPActiveMontage = Parms.TPActiveMontage;

	if (TPCurrentSectionName != nullptr)
		*TPCurrentSectionName = Parms.TPCurrentSectionName;

}


// Function BPTA_SwingMelee.BPTA_SwingMelee_C.SetItemMesh
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_EquippableItemBase_C*    LEquippedItem                                                    (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      SkeletalMesh                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetRootMesh_ReturnValue                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLightweightRoot_bSuccess                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetLightweightRoot_Root                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               CallFunc_GetSkeletalMeshAsset_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_EquippableItemBase_C*    K2Node_DynamicCast_AsBP_Equippable_Item_Base                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetThirdPersonEnabled_bIsEnabled                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetTPMesh_SkeletalMesh                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSocketExist_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSocketExist_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetTraceMesh_TraceMesh                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetSK_HMM_FP_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABPTA_SwingMelee_C::SetItemMesh(bool* Success, class ABP_EquippableItemBase_C* LEquippedItem, class USkeletalMeshComponent* SkeletalMesh, class USkeletalMeshComponent* CallFunc_GetRootMesh_ReturnValue, bool CallFunc_GetLightweightRoot_bSuccess, class USkeletalMeshComponent* CallFunc_GetLightweightRoot_Root, class USkeletalMesh* CallFunc_GetSkeletalMeshAsset_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ABP_EquippableItemBase_C* K2Node_DynamicCast_AsBP_Equippable_Item_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetThirdPersonEnabled_bIsEnabled, class USkeletalMeshComponent* CallFunc_GetTPMesh_SkeletalMesh, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_DoesSocketExist_ReturnValue, bool CallFunc_DoesSocketExist_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class USkeletalMeshComponent* CallFunc_GetTraceMesh_TraceMesh, bool CallFunc_IsValid_ReturnValue_4, class USkeletalMeshComponent* CallFunc_GetSK_HMM_FP_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_SwingMelee_C", "SetItemMesh");

	Params::ABPTA_SwingMelee_C_SetItemMesh_Params Parms{};

	Parms.LEquippedItem = LEquippedItem;
	Parms.SkeletalMesh = SkeletalMesh;
	Parms.CallFunc_GetRootMesh_ReturnValue = CallFunc_GetRootMesh_ReturnValue;
	Parms.CallFunc_GetLightweightRoot_bSuccess = CallFunc_GetLightweightRoot_bSuccess;
	Parms.CallFunc_GetLightweightRoot_Root = CallFunc_GetLightweightRoot_Root;
	Parms.CallFunc_GetSkeletalMeshAsset_ReturnValue = CallFunc_GetSkeletalMeshAsset_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Equippable_Item_Base = K2Node_DynamicCast_AsBP_Equippable_Item_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetThirdPersonEnabled_bIsEnabled = CallFunc_GetThirdPersonEnabled_bIsEnabled;
	Parms.CallFunc_GetTPMesh_SkeletalMesh = CallFunc_GetTPMesh_SkeletalMesh;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_DoesSocketExist_ReturnValue = CallFunc_DoesSocketExist_ReturnValue;
	Parms.CallFunc_DoesSocketExist_ReturnValue_1 = CallFunc_DoesSocketExist_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetTraceMesh_TraceMesh = CallFunc_GetTraceMesh_TraceMesh;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_GetSK_HMM_FP_ReturnValue = CallFunc_GetSK_HMM_FP_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BPTA_SwingMelee.BPTA_SwingMelee_C.CheckIfTargetHasBeenHit
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  InHitResult                                                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_Array_Get_Item                                          (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor_1                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent_1                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABPTA_SwingMelee_C::CheckIfTargetHasBeenHit(const struct FHitResult& InHitResult, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, int32 CallFunc_Array_Length_ReturnValue, const struct FHitResult& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, class FName CallFunc_BreakHitResult_BoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_ElementIndex_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_SwingMelee_C", "CheckIfTargetHasBeenHit");

	Params::ABPTA_SwingMelee_C_CheckIfTargetHasBeenHit_Params Parms{};

	Parms.InHitResult = InHitResult;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_BoneName = CallFunc_BreakHitResult_BoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = CallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit_1 = CallFunc_BreakHitResult_bBlockingHit_1;
	Parms.CallFunc_BreakHitResult_bInitialOverlap_1 = CallFunc_BreakHitResult_bInitialOverlap_1;
	Parms.CallFunc_BreakHitResult_Time_1 = CallFunc_BreakHitResult_Time_1;
	Parms.CallFunc_BreakHitResult_Distance_1 = CallFunc_BreakHitResult_Distance_1;
	Parms.CallFunc_BreakHitResult_Location_1 = CallFunc_BreakHitResult_Location_1;
	Parms.CallFunc_BreakHitResult_ImpactPoint_1 = CallFunc_BreakHitResult_ImpactPoint_1;
	Parms.CallFunc_BreakHitResult_Normal_1 = CallFunc_BreakHitResult_Normal_1;
	Parms.CallFunc_BreakHitResult_ImpactNormal_1 = CallFunc_BreakHitResult_ImpactNormal_1;
	Parms.CallFunc_BreakHitResult_PhysMat_1 = CallFunc_BreakHitResult_PhysMat_1;
	Parms.CallFunc_BreakHitResult_HitActor_1 = CallFunc_BreakHitResult_HitActor_1;
	Parms.CallFunc_BreakHitResult_HitComponent_1 = CallFunc_BreakHitResult_HitComponent_1;
	Parms.CallFunc_BreakHitResult_HitBoneName_1 = CallFunc_BreakHitResult_HitBoneName_1;
	Parms.CallFunc_BreakHitResult_BoneName_1 = CallFunc_BreakHitResult_BoneName_1;
	Parms.CallFunc_BreakHitResult_HitItem_1 = CallFunc_BreakHitResult_HitItem_1;
	Parms.CallFunc_BreakHitResult_ElementIndex_1 = CallFunc_BreakHitResult_ElementIndex_1;
	Parms.CallFunc_BreakHitResult_FaceIndex_1 = CallFunc_BreakHitResult_FaceIndex_1;
	Parms.CallFunc_BreakHitResult_TraceStart_1 = CallFunc_BreakHitResult_TraceStart_1;
	Parms.CallFunc_BreakHitResult_TraceEnd_1 = CallFunc_BreakHitResult_TraceEnd_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPTA_SwingMelee.BPTA_SwingMelee_C.IsHitWithinHardHitAngle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  HitResult                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetHardHitAnimationAngle_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetThirdPersonEnabled_bIsEnabled                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetHardHitAnimationAngle_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPointWithinXYAngleInFrontOfFPCamera_ReturnValue       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPointWithinXYAngleInFrontOfTPCamera_ReturnValue       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABPTA_SwingMelee_C::IsHitWithinHardHitAngle(const struct FHitResult& HitResult, double CallFunc_GetHardHitAnimationAngle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_GetThirdPersonEnabled_bIsEnabled, double CallFunc_GetHardHitAnimationAngle_ReturnValue_1, bool CallFunc_IsPointWithinXYAngleInFrontOfFPCamera_ReturnValue, bool CallFunc_IsPointWithinXYAngleInFrontOfTPCamera_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_SwingMelee_C", "IsHitWithinHardHitAngle");

	Params::ABPTA_SwingMelee_C_IsHitWithinHardHitAngle_Params Parms{};

	Parms.HitResult = HitResult;
	Parms.CallFunc_GetHardHitAnimationAngle_ReturnValue = CallFunc_GetHardHitAnimationAngle_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_BoneName = CallFunc_BreakHitResult_BoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = CallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_GetThirdPersonEnabled_bIsEnabled = CallFunc_GetThirdPersonEnabled_bIsEnabled;
	Parms.CallFunc_GetHardHitAnimationAngle_ReturnValue_1 = CallFunc_GetHardHitAnimationAngle_ReturnValue_1;
	Parms.CallFunc_IsPointWithinXYAngleInFrontOfFPCamera_ReturnValue = CallFunc_IsPointWithinXYAngleInFrontOfFPCamera_ReturnValue;
	Parms.CallFunc_IsPointWithinXYAngleInFrontOfTPCamera_ReturnValue = CallFunc_IsPointWithinXYAngleInFrontOfTPCamera_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPTA_SwingMelee.BPTA_SwingMelee_C.HitShouldStopSwing
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  InHitResult                                                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               ShouldStopSwing                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       HitsToIgnore                                                     (Edit, BlueprintVisible)
// class AActor*                      InHitActor                                                       (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleCallFunc_GetContextFromOwner_ReturnValue                         (None)
// class AActor*                      CallFunc_EffectContextGetInstigatorActor_ReturnValue             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AreAutomatedTestsRunning_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayTagAssetInterface>CallFunc_HasMatchingGameplayTag_self_CastInput                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor_1                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent_1                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayTagAssetInterface>K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyMatchingGameplayTags_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHitObjectLandscape_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHitWithinHardHitAngle_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTA_SwingMelee_C::HitShouldStopSwing(const struct FHitResult& InHitResult, bool* ShouldStopSwing, const struct FGameplayTagContainer& HitsToIgnore, class AActor* InHitActor, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, const struct FGameplayEffectContextHandle& CallFunc_GetContextFromOwner_ReturnValue, class AActor* CallFunc_EffectContextGetInstigatorActor_ReturnValue, bool CallFunc_AreAutomatedTestsRunning_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, class FName CallFunc_BreakHitResult_BoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_ElementIndex_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsHitObjectLandscape_ReturnValue, bool CallFunc_IsHitWithinHardHitAngle_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_SwingMelee_C", "HitShouldStopSwing");

	Params::ABPTA_SwingMelee_C_HitShouldStopSwing_Params Parms{};

	Parms.InHitResult = InHitResult;
	Parms.HitsToIgnore = HitsToIgnore;
	Parms.InHitActor = InHitActor;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_BoneName = CallFunc_BreakHitResult_BoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = CallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetContextFromOwner_ReturnValue = CallFunc_GetContextFromOwner_ReturnValue;
	Parms.CallFunc_EffectContextGetInstigatorActor_ReturnValue = CallFunc_EffectContextGetInstigatorActor_ReturnValue;
	Parms.CallFunc_AreAutomatedTestsRunning_ReturnValue = CallFunc_AreAutomatedTestsRunning_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_HasMatchingGameplayTag_self_CastInput = CallFunc_HasMatchingGameplayTag_self_CastInput;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue = CallFunc_HasMatchingGameplayTag_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit_1 = CallFunc_BreakHitResult_bBlockingHit_1;
	Parms.CallFunc_BreakHitResult_bInitialOverlap_1 = CallFunc_BreakHitResult_bInitialOverlap_1;
	Parms.CallFunc_BreakHitResult_Time_1 = CallFunc_BreakHitResult_Time_1;
	Parms.CallFunc_BreakHitResult_Distance_1 = CallFunc_BreakHitResult_Distance_1;
	Parms.CallFunc_BreakHitResult_Location_1 = CallFunc_BreakHitResult_Location_1;
	Parms.CallFunc_BreakHitResult_ImpactPoint_1 = CallFunc_BreakHitResult_ImpactPoint_1;
	Parms.CallFunc_BreakHitResult_Normal_1 = CallFunc_BreakHitResult_Normal_1;
	Parms.CallFunc_BreakHitResult_ImpactNormal_1 = CallFunc_BreakHitResult_ImpactNormal_1;
	Parms.CallFunc_BreakHitResult_PhysMat_1 = CallFunc_BreakHitResult_PhysMat_1;
	Parms.CallFunc_BreakHitResult_HitActor_1 = CallFunc_BreakHitResult_HitActor_1;
	Parms.CallFunc_BreakHitResult_HitComponent_1 = CallFunc_BreakHitResult_HitComponent_1;
	Parms.CallFunc_BreakHitResult_HitBoneName_1 = CallFunc_BreakHitResult_HitBoneName_1;
	Parms.CallFunc_BreakHitResult_BoneName_1 = CallFunc_BreakHitResult_BoneName_1;
	Parms.CallFunc_BreakHitResult_HitItem_1 = CallFunc_BreakHitResult_HitItem_1;
	Parms.CallFunc_BreakHitResult_ElementIndex_1 = CallFunc_BreakHitResult_ElementIndex_1;
	Parms.CallFunc_BreakHitResult_FaceIndex_1 = CallFunc_BreakHitResult_FaceIndex_1;
	Parms.CallFunc_BreakHitResult_TraceStart_1 = CallFunc_BreakHitResult_TraceStart_1;
	Parms.CallFunc_BreakHitResult_TraceEnd_1 = CallFunc_BreakHitResult_TraceEnd_1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_HasAnyMatchingGameplayTags_ReturnValue = CallFunc_HasAnyMatchingGameplayTags_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsHitObjectLandscape_ReturnValue = CallFunc_IsHitObjectLandscape_ReturnValue;
	Parms.CallFunc_IsHitWithinHardHitAngle_ReturnValue = CallFunc_IsHitWithinHardHitAngle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ShouldStopSwing != nullptr)
		*ShouldStopSwing = Parms.ShouldStopSwing;

}


// Function BPTA_SwingMelee.BPTA_SwingMelee_C.GetHardHitMaxDistance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double ABPTA_SwingMelee_C::GetHardHitMaxDistance(bool CallFunc_EqualEqual_GameplayTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_SwingMelee_C", "GetHardHitMaxDistance");

	Params::ABPTA_SwingMelee_C_GetHardHitMaxDistance_Params Parms{};

	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue = CallFunc_EqualEqual_GameplayTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPTA_SwingMelee.BPTA_SwingMelee_C.GetHardHitAnimationAngle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double ABPTA_SwingMelee_C::GetHardHitAnimationAngle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_SwingMelee_C", "GetHardHitAnimationAngle");

	Params::ABPTA_SwingMelee_C_GetHardHitAnimationAngle_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPTA_SwingMelee.BPTA_SwingMelee_C.GetValidationDistance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                      HitActor                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             DefaultDistance                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             ValidationDistance                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesImplementInterface_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IDamageTargetValidationInterface>K2Node_DynamicCast_AsDamage_Target_Validation_Interface          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMeleeValidationDistance_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_ValidationDistance_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTA_SwingMelee_C::GetValidationDistance(class AActor* HitActor, double DefaultDistance, double* ValidationDistance, bool CallFunc_DoesImplementInterface_ReturnValue, TScriptInterface<class IDamageTargetValidationInterface> K2Node_DynamicCast_AsDamage_Target_Validation_Interface, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetMeleeValidationDistance_ReturnValue, double K2Node_FunctionResult_ValidationDistance_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_SwingMelee_C", "GetValidationDistance");

	Params::ABPTA_SwingMelee_C_GetValidationDistance_Params Parms{};

	Parms.HitActor = HitActor;
	Parms.DefaultDistance = DefaultDistance;
	Parms.CallFunc_DoesImplementInterface_ReturnValue = CallFunc_DoesImplementInterface_ReturnValue;
	Parms.K2Node_DynamicCast_AsDamage_Target_Validation_Interface = K2Node_DynamicCast_AsDamage_Target_Validation_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetMeleeValidationDistance_ReturnValue = CallFunc_GetMeleeValidationDistance_ReturnValue;
	Parms.K2Node_FunctionResult_ValidationDistance_ImplicitCast = K2Node_FunctionResult_ValidationDistance_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (ValidationDistance != nullptr)
		*ValidationDistance = Parms.ValidationDistance;

}


// Function BPTA_SwingMelee.BPTA_SwingMelee_C.Update Sockets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               LIsMirrored                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CurrentMontage                                                   (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        CurrectSectionName                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        BottomSocketOld                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        TopSocketOld                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetThirdPersonEnabled_bIsEnabled                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_Get_Anim_Info_FPAnimInstance                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_Get_Anim_Info_FPActiveMontage                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Get_Anim_Info_FPCurrentSectionName                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_Get_Anim_Info_TPAnimInstance                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_Get_Anim_Info_TPActiveMontage                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Get_Anim_Info_TPCurrentSectionName                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UAnimMetaData*>       CallFunc_GetSectionMetaData_ReturnValue                          (ConstParm, ReferenceParm)
// class UAnimMetaData*               CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMetaData_TraceSocketData_C*K2Node_DynamicCast_AsAnim_Meta_Data_Trace_Socket_Data            (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Get_Is_Mirrored_IsMirroredItem                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Get_Sockets_TopSocket                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Get_Sockets_BottomSocket                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Get_Sockets_MeleeSocket                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Get_Sockets_CreatureSocket                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_StartSocketTrace_Succeeded                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTA_SwingMelee_C::Update_Sockets(bool LIsMirrored, class UAnimMontage* CurrentMontage, class FName CurrectSectionName, class FName BottomSocketOld, class FName TopSocketOld, int32 Temp_int_Array_Index_Variable, bool CallFunc_GetThirdPersonEnabled_bIsEnabled, class UAnimInstance* CallFunc_Get_Anim_Info_FPAnimInstance, class UAnimMontage* CallFunc_Get_Anim_Info_FPActiveMontage, class FName CallFunc_Get_Anim_Info_FPCurrentSectionName, class UAnimInstance* CallFunc_Get_Anim_Info_TPAnimInstance, class UAnimMontage* CallFunc_Get_Anim_Info_TPActiveMontage, class FName CallFunc_Get_Anim_Info_TPCurrentSectionName, TArray<class UAnimMetaData*>& CallFunc_GetSectionMetaData_ReturnValue, class UAnimMetaData* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UAnimMetaData_TraceSocketData_C* K2Node_DynamicCast_AsAnim_Meta_Data_Trace_Socket_Data, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Get_Is_Mirrored_IsMirroredItem, class FName CallFunc_Get_Sockets_TopSocket, class FName CallFunc_Get_Sockets_BottomSocket, class FName CallFunc_Get_Sockets_MeleeSocket, class FName CallFunc_Get_Sockets_CreatureSocket, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_StartSocketTrace_Succeeded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_SwingMelee_C", "Update Sockets");

	Params::ABPTA_SwingMelee_C_Update_Sockets_Params Parms{};

	Parms.LIsMirrored = LIsMirrored;
	Parms.CurrentMontage = CurrentMontage;
	Parms.CurrectSectionName = CurrectSectionName;
	Parms.BottomSocketOld = BottomSocketOld;
	Parms.TopSocketOld = TopSocketOld;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetThirdPersonEnabled_bIsEnabled = CallFunc_GetThirdPersonEnabled_bIsEnabled;
	Parms.CallFunc_Get_Anim_Info_FPAnimInstance = CallFunc_Get_Anim_Info_FPAnimInstance;
	Parms.CallFunc_Get_Anim_Info_FPActiveMontage = CallFunc_Get_Anim_Info_FPActiveMontage;
	Parms.CallFunc_Get_Anim_Info_FPCurrentSectionName = CallFunc_Get_Anim_Info_FPCurrentSectionName;
	Parms.CallFunc_Get_Anim_Info_TPAnimInstance = CallFunc_Get_Anim_Info_TPAnimInstance;
	Parms.CallFunc_Get_Anim_Info_TPActiveMontage = CallFunc_Get_Anim_Info_TPActiveMontage;
	Parms.CallFunc_Get_Anim_Info_TPCurrentSectionName = CallFunc_Get_Anim_Info_TPCurrentSectionName;
	Parms.CallFunc_GetSectionMetaData_ReturnValue = CallFunc_GetSectionMetaData_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsAnim_Meta_Data_Trace_Socket_Data = K2Node_DynamicCast_AsAnim_Meta_Data_Trace_Socket_Data;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Get_Is_Mirrored_IsMirroredItem = CallFunc_Get_Is_Mirrored_IsMirroredItem;
	Parms.CallFunc_Get_Sockets_TopSocket = CallFunc_Get_Sockets_TopSocket;
	Parms.CallFunc_Get_Sockets_BottomSocket = CallFunc_Get_Sockets_BottomSocket;
	Parms.CallFunc_Get_Sockets_MeleeSocket = CallFunc_Get_Sockets_MeleeSocket;
	Parms.CallFunc_Get_Sockets_CreatureSocket = CallFunc_Get_Sockets_CreatureSocket;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_1 = CallFunc_NotEqual_NameName_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_StartSocketTrace_Succeeded = CallFunc_StartSocketTrace_Succeeded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTA_SwingMelee.BPTA_SwingMelee_C.Get Trace Radius
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Radius                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UAnimMetaData*>       CallFunc_GetMetaData_ReturnValue                                 (ConstParm, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMetaData*               CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMetaData_TracePaddingData_C*K2Node_DynamicCast_AsAnim_Meta_Data_Trace_Padding_Data           (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetRadius_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTA_SwingMelee_C::Get_Trace_Radius(double* Radius, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UAnimMetaData*>& CallFunc_GetMetaData_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UAnimMetaData* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UAnimMetaData_TracePaddingData_C* K2Node_DynamicCast_AsAnim_Meta_Data_Trace_Padding_Data, bool K2Node_DynamicCast_bSuccess, double CallFunc_GetRadius_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_SwingMelee_C", "Get Trace Radius");

	Params::ABPTA_SwingMelee_C_Get_Trace_Radius_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetMetaData_ReturnValue = CallFunc_GetMetaData_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsAnim_Meta_Data_Trace_Padding_Data = K2Node_DynamicCast_AsAnim_Meta_Data_Trace_Padding_Data;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetRadius_ReturnValue = CallFunc_GetRadius_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Radius != nullptr)
		*Radius = Parms.Radius;

}


// Function BPTA_SwingMelee.BPTA_SwingMelee_C.UpdateComboSectionData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CurrentSectionName                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CurrentMontage                                                   (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_Get_Anim_Info_FPAnimInstance                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_Get_Anim_Info_FPActiveMontage                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Get_Anim_Info_FPCurrentSectionName                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_Get_Anim_Info_TPAnimInstance                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_Get_Anim_Info_TPActiveMontage                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Get_Anim_Info_TPCurrentSectionName                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UAnimMetaData*>       CallFunc_GetSectionMetaData_ReturnValue                          (ConstParm, ReferenceParm)
// class UAnimMetaData*               CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMetaData_ComboSectionData_C*K2Node_DynamicCast_AsAnim_Meta_Data_Combo_Section_Data           (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTA_SwingMelee_C::UpdateComboSectionData(class FName CurrentSectionName, class UAnimMontage* CurrentMontage, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UAnimInstance* CallFunc_Get_Anim_Info_FPAnimInstance, class UAnimMontage* CallFunc_Get_Anim_Info_FPActiveMontage, class FName CallFunc_Get_Anim_Info_FPCurrentSectionName, class UAnimInstance* CallFunc_Get_Anim_Info_TPAnimInstance, class UAnimMontage* CallFunc_Get_Anim_Info_TPActiveMontage, class FName CallFunc_Get_Anim_Info_TPCurrentSectionName, TArray<class UAnimMetaData*>& CallFunc_GetSectionMetaData_ReturnValue, class UAnimMetaData* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UAnimMetaData_ComboSectionData_C* K2Node_DynamicCast_AsAnim_Meta_Data_Combo_Section_Data, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_SwingMelee_C", "UpdateComboSectionData");

	Params::ABPTA_SwingMelee_C_UpdateComboSectionData_Params Parms{};

	Parms.CurrentSectionName = CurrentSectionName;
	Parms.CurrentMontage = CurrentMontage;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Get_Anim_Info_FPAnimInstance = CallFunc_Get_Anim_Info_FPAnimInstance;
	Parms.CallFunc_Get_Anim_Info_FPActiveMontage = CallFunc_Get_Anim_Info_FPActiveMontage;
	Parms.CallFunc_Get_Anim_Info_FPCurrentSectionName = CallFunc_Get_Anim_Info_FPCurrentSectionName;
	Parms.CallFunc_Get_Anim_Info_TPAnimInstance = CallFunc_Get_Anim_Info_TPAnimInstance;
	Parms.CallFunc_Get_Anim_Info_TPActiveMontage = CallFunc_Get_Anim_Info_TPActiveMontage;
	Parms.CallFunc_Get_Anim_Info_TPCurrentSectionName = CallFunc_Get_Anim_Info_TPCurrentSectionName;
	Parms.CallFunc_GetSectionMetaData_ReturnValue = CallFunc_GetSectionMetaData_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsAnim_Meta_Data_Combo_Section_Data = K2Node_DynamicCast_AsAnim_Meta_Data_Combo_Section_Data;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTA_SwingMelee.BPTA_SwingMelee_C.StartSocketTrace
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Succeeded                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetItemMesh_Success                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Get_Trace_Radius_Radius                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CreatureKnockbackData    K2Node_MakeStruct_S_CreatureKnockbackData                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BeginAdvancedSocketTrace_bSuccess                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTA_SwingMelee_C::StartSocketTrace(bool* Succeeded, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_SetItemMesh_Success, double CallFunc_Get_Trace_Radius_Radius, const struct FS_CreatureKnockbackData& K2Node_MakeStruct_S_CreatureKnockbackData, bool CallFunc_BeginAdvancedSocketTrace_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_SwingMelee_C", "StartSocketTrace");

	Params::ABPTA_SwingMelee_C_StartSocketTrace_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_SetItemMesh_Success = CallFunc_SetItemMesh_Success;
	Parms.CallFunc_Get_Trace_Radius_Radius = CallFunc_Get_Trace_Radius_Radius;
	Parms.K2Node_MakeStruct_S_CreatureKnockbackData = K2Node_MakeStruct_S_CreatureKnockbackData;
	Parms.CallFunc_BeginAdvancedSocketTrace_bSuccess = CallFunc_BeginAdvancedSocketTrace_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Succeeded != nullptr)
		*Succeeded = Parms.Succeeded;

}


// Function BPTA_SwingMelee.BPTA_SwingMelee_C.ShouldUpdateMontage
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bReturnValue                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                NewMontageAction                                                 (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                NewFPMontage                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                NewTPMontage                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FAbilityMontages            CallFunc_GetSwingAnimSetAndAction_Anims                          (None)
// struct FGameplayTag                CallFunc_GetSwingAnimSetAndAction_MontageAction                  (NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetRandomMontagesFromSet_RandomFirstPersonItem          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetRandomMontagesFromSet_RandomFirstPersonCharacter     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetRandomMontagesFromSet_RandomThirdPersonItem          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetRandomMontagesFromSet_RandomThirdPersonCharacter     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTA_SwingMelee_C::ShouldUpdateMontage(bool* bReturnValue, struct FGameplayTag* NewMontageAction, class UAnimMontage** NewFPMontage, class UAnimMontage** NewTPMontage, const struct FAbilityMontages& CallFunc_GetSwingAnimSetAndAction_Anims, const struct FGameplayTag& CallFunc_GetSwingAnimSetAndAction_MontageAction, class UAnimMontage* CallFunc_GetRandomMontagesFromSet_RandomFirstPersonItem, class UAnimMontage* CallFunc_GetRandomMontagesFromSet_RandomFirstPersonCharacter, class UAnimMontage* CallFunc_GetRandomMontagesFromSet_RandomThirdPersonItem, class UAnimMontage* CallFunc_GetRandomMontagesFromSet_RandomThirdPersonCharacter, bool CallFunc_EqualEqual_GameplayTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_SwingMelee_C", "ShouldUpdateMontage");

	Params::ABPTA_SwingMelee_C_ShouldUpdateMontage_Params Parms{};

	Parms.CallFunc_GetSwingAnimSetAndAction_Anims = CallFunc_GetSwingAnimSetAndAction_Anims;
	Parms.CallFunc_GetSwingAnimSetAndAction_MontageAction = CallFunc_GetSwingAnimSetAndAction_MontageAction;
	Parms.CallFunc_GetRandomMontagesFromSet_RandomFirstPersonItem = CallFunc_GetRandomMontagesFromSet_RandomFirstPersonItem;
	Parms.CallFunc_GetRandomMontagesFromSet_RandomFirstPersonCharacter = CallFunc_GetRandomMontagesFromSet_RandomFirstPersonCharacter;
	Parms.CallFunc_GetRandomMontagesFromSet_RandomThirdPersonItem = CallFunc_GetRandomMontagesFromSet_RandomThirdPersonItem;
	Parms.CallFunc_GetRandomMontagesFromSet_RandomThirdPersonCharacter = CallFunc_GetRandomMontagesFromSet_RandomThirdPersonCharacter;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue = CallFunc_EqualEqual_GameplayTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bReturnValue != nullptr)
		*bReturnValue = Parms.bReturnValue;

	if (NewMontageAction != nullptr)
		*NewMontageAction = std::move(Parms.NewMontageAction);

	if (NewFPMontage != nullptr)
		*NewFPMontage = Parms.NewFPMontage;

	if (NewTPMontage != nullptr)
		*NewTPMontage = Parms.NewTPMontage;

}


// Function BPTA_SwingMelee.BPTA_SwingMelee_C.ResetState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPTA_SwingMelee_C::ResetState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_SwingMelee_C", "ResetState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPTA_SwingMelee.BPTA_SwingMelee_C.HandleImpact
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        HitSection                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetHitSection_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFrameRate                  CallFunc_MakeFrameRate_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFrameRate                  CallFunc_MakeFrameRate_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_FrameRateToInterval_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_FrameRateToInterval_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_Get_Anim_Info_FPAnimInstance                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_Get_Anim_Info_FPActiveMontage                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Get_Anim_Info_FPCurrentSectionName                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_Get_Anim_Info_TPAnimInstance                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_Get_Anim_Info_TPActiveMontage                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Get_Anim_Info_TPCurrentSectionName                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_Get_Anim_Info_FPAnimInstance_1                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_Get_Anim_Info_FPActiveMontage_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Get_Anim_Info_FPCurrentSectionName_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_Get_Anim_Info_TPAnimInstance_1                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_Get_Anim_Info_TPActiveMontage_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Get_Anim_Info_TPCurrentSectionName_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTA_SwingMelee_C::HandleImpact(class FName HitSection, bool CallFunc_IsValid_ReturnValue, class FName CallFunc_GetHitSection_ReturnValue, const struct FFrameRate& CallFunc_MakeFrameRate_ReturnValue, const struct FFrameRate& CallFunc_MakeFrameRate_ReturnValue_1, float CallFunc_Conv_FrameRateToInterval_ReturnValue, float CallFunc_Conv_FrameRateToInterval_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAnimInstance* CallFunc_Get_Anim_Info_FPAnimInstance, class UAnimMontage* CallFunc_Get_Anim_Info_FPActiveMontage, class FName CallFunc_Get_Anim_Info_FPCurrentSectionName, class UAnimInstance* CallFunc_Get_Anim_Info_TPAnimInstance, class UAnimMontage* CallFunc_Get_Anim_Info_TPActiveMontage, class FName CallFunc_Get_Anim_Info_TPCurrentSectionName, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UAnimInstance* CallFunc_Get_Anim_Info_FPAnimInstance_1, class UAnimMontage* CallFunc_Get_Anim_Info_FPActiveMontage_1, class FName CallFunc_Get_Anim_Info_FPCurrentSectionName_1, class UAnimInstance* CallFunc_Get_Anim_Info_TPAnimInstance_1, class UAnimMontage* CallFunc_Get_Anim_Info_TPActiveMontage_1, class FName CallFunc_Get_Anim_Info_TPCurrentSectionName_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, bool CallFunc_NotEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_SwingMelee_C", "HandleImpact");

	Params::ABPTA_SwingMelee_C_HandleImpact_Params Parms{};

	Parms.HitSection = HitSection;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetHitSection_ReturnValue = CallFunc_GetHitSection_ReturnValue;
	Parms.CallFunc_MakeFrameRate_ReturnValue = CallFunc_MakeFrameRate_ReturnValue;
	Parms.CallFunc_MakeFrameRate_ReturnValue_1 = CallFunc_MakeFrameRate_ReturnValue_1;
	Parms.CallFunc_Conv_FrameRateToInterval_ReturnValue = CallFunc_Conv_FrameRateToInterval_ReturnValue;
	Parms.CallFunc_Conv_FrameRateToInterval_ReturnValue_1 = CallFunc_Conv_FrameRateToInterval_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Get_Anim_Info_FPAnimInstance = CallFunc_Get_Anim_Info_FPAnimInstance;
	Parms.CallFunc_Get_Anim_Info_FPActiveMontage = CallFunc_Get_Anim_Info_FPActiveMontage;
	Parms.CallFunc_Get_Anim_Info_FPCurrentSectionName = CallFunc_Get_Anim_Info_FPCurrentSectionName;
	Parms.CallFunc_Get_Anim_Info_TPAnimInstance = CallFunc_Get_Anim_Info_TPAnimInstance;
	Parms.CallFunc_Get_Anim_Info_TPActiveMontage = CallFunc_Get_Anim_Info_TPActiveMontage;
	Parms.CallFunc_Get_Anim_Info_TPCurrentSectionName = CallFunc_Get_Anim_Info_TPCurrentSectionName;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Get_Anim_Info_FPAnimInstance_1 = CallFunc_Get_Anim_Info_FPAnimInstance_1;
	Parms.CallFunc_Get_Anim_Info_FPActiveMontage_1 = CallFunc_Get_Anim_Info_FPActiveMontage_1;
	Parms.CallFunc_Get_Anim_Info_FPCurrentSectionName_1 = CallFunc_Get_Anim_Info_FPCurrentSectionName_1;
	Parms.CallFunc_Get_Anim_Info_TPAnimInstance_1 = CallFunc_Get_Anim_Info_TPAnimInstance_1;
	Parms.CallFunc_Get_Anim_Info_TPActiveMontage_1 = CallFunc_Get_Anim_Info_TPActiveMontage_1;
	Parms.CallFunc_Get_Anim_Info_TPCurrentSectionName_1 = CallFunc_Get_Anim_Info_TPCurrentSectionName_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTA_SwingMelee.BPTA_SwingMelee_C.JumpToSection
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bBlend                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                TPMontage                                                        (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                FPMontage                                                        (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSectionName_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_Get_Anim_Info_FPAnimInstance                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_Get_Anim_Info_FPActiveMontage                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Get_Anim_Info_FPCurrentSectionName                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_Get_Anim_Info_TPAnimInstance                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_Get_Anim_Info_TPActiveMontage                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Get_Anim_Info_TPCurrentSectionName                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetThirdPersonEnabled_bIsEnabled                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_MakeStruct_GameplayEventData                              (None)
// int32                              CallFunc_SendGameplayEventToActor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTA_SwingMelee_C::JumpToSection(class FName Name, bool bBlend, class UAnimMontage* TPMontage, class UAnimMontage* FPMontage, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_IsValidSectionName_ReturnValue, class UAnimInstance* CallFunc_Get_Anim_Info_FPAnimInstance, class UAnimMontage* CallFunc_Get_Anim_Info_FPActiveMontage, class FName CallFunc_Get_Anim_Info_FPCurrentSectionName, class UAnimInstance* CallFunc_Get_Anim_Info_TPAnimInstance, class UAnimMontage* CallFunc_Get_Anim_Info_TPActiveMontage, class FName CallFunc_Get_Anim_Info_TPCurrentSectionName, bool CallFunc_GetThirdPersonEnabled_bIsEnabled, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, int32 CallFunc_SendGameplayEventToActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_SwingMelee_C", "JumpToSection");

	Params::ABPTA_SwingMelee_C_JumpToSection_Params Parms{};

	Parms.Name = Name;
	Parms.bBlend = bBlend;
	Parms.TPMontage = TPMontage;
	Parms.FPMontage = FPMontage;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_IsValidSectionName_ReturnValue = CallFunc_IsValidSectionName_ReturnValue;
	Parms.CallFunc_Get_Anim_Info_FPAnimInstance = CallFunc_Get_Anim_Info_FPAnimInstance;
	Parms.CallFunc_Get_Anim_Info_FPActiveMontage = CallFunc_Get_Anim_Info_FPActiveMontage;
	Parms.CallFunc_Get_Anim_Info_FPCurrentSectionName = CallFunc_Get_Anim_Info_FPCurrentSectionName;
	Parms.CallFunc_Get_Anim_Info_TPAnimInstance = CallFunc_Get_Anim_Info_TPAnimInstance;
	Parms.CallFunc_Get_Anim_Info_TPActiveMontage = CallFunc_Get_Anim_Info_TPActiveMontage;
	Parms.CallFunc_Get_Anim_Info_TPCurrentSectionName = CallFunc_Get_Anim_Info_TPCurrentSectionName;
	Parms.CallFunc_GetThirdPersonEnabled_bIsEnabled = CallFunc_GetThirdPersonEnabled_bIsEnabled;
	Parms.K2Node_MakeStruct_GameplayEventData = K2Node_MakeStruct_GameplayEventData;
	Parms.CallFunc_SendGameplayEventToActor_ReturnValue = CallFunc_SendGameplayEventToActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTA_SwingMelee.BPTA_SwingMelee_C.ValidateClientTargetData
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityTargetDataHandleData                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               bIsTargetDataValid                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      InsigatorActor                                                   (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// double                             ValidationDistance                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TargetDataHasHitResult_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_GetHitResultFromTargetData_ReturnValue                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPlayerNameFromPawn_PlayerName                        (ZeroConstructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// double                             CallFunc_Vector_Distance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetValidationDistance_ValidationDistance                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_VectorToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Vector_Distance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_VectorToString_ReturnValue_1                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_8                             (ZeroConstructor, HasGetValueTypeHash)

void ABPTA_SwingMelee_C::ValidateClientTargetData(struct FGameplayAbilityTargetDataHandle& Data, bool* bIsTargetDataValid, class AActor* InsigatorActor, double ValidationDistance, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_TargetDataHasHitResult_ReturnValue, const struct FHitResult& CallFunc_GetHitResultFromTargetData_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const class FString& CallFunc_GetPlayerNameFromPawn_PlayerName, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, double CallFunc_Vector_Distance_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_GetValidationDistance_ValidationDistance, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue_2, const class FString& CallFunc_Conv_VectorToString_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, double CallFunc_Vector_Distance_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const class FString& CallFunc_Conv_VectorToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_8)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_SwingMelee_C", "ValidateClientTargetData");

	Params::ABPTA_SwingMelee_C_ValidateClientTargetData_Params Parms{};

	Parms.Data = Data;
	Parms.InsigatorActor = InsigatorActor;
	Parms.ValidationDistance = ValidationDistance;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_TargetDataHasHitResult_ReturnValue = CallFunc_TargetDataHasHitResult_ReturnValue;
	Parms.CallFunc_GetHitResultFromTargetData_ReturnValue = CallFunc_GetHitResultFromTargetData_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_BoneName = CallFunc_BreakHitResult_BoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = CallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_GetPlayerNameFromPawn_PlayerName = CallFunc_GetPlayerNameFromPawn_PlayerName;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Vector_Distance_ReturnValue = CallFunc_Vector_Distance_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetValidationDistance_ValidationDistance = CallFunc_GetValidationDistance_ValidationDistance;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_1 = CallFunc_ClassIsChildOf_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_2 = CallFunc_ClassIsChildOf_ReturnValue_2;
	Parms.CallFunc_Conv_VectorToString_ReturnValue = CallFunc_Conv_VectorToString_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Vector_Distance_ReturnValue_1 = CallFunc_Vector_Distance_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue = CallFunc_Conv_DoubleToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue_1 = CallFunc_LessEqual_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_Conv_VectorToString_ReturnValue_1 = CallFunc_Conv_VectorToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.CallFunc_Concat_StrStr_ReturnValue_8 = CallFunc_Concat_StrStr_ReturnValue_8;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsTargetDataValid != nullptr)
		*bIsTargetDataValid = Parms.bIsTargetDataValid;

}


// Function BPTA_SwingMelee.BPTA_SwingMelee_C.ConfirmAndSendTargetData
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (Parm, OutParm)
// struct FGameplayAbilityTargetDataHandleCallFunc_AbilityTargetDataFromBool_ReturnValue                   (None)
// struct FGameplayAbilityTargetDataHandleCallFunc_AbilityTargetDataFromInt_ReturnValue                    (None)
// struct FGameplayAbilityTargetDataHandleCallFunc_AbilityTargetDataFromBool_ReturnValue_1                 (None)
// struct FGameplayAbilityTargetDataHandleCallFunc_AbilityTargetDataFromGameplayTag_ReturnValue            (None)
// struct FGameplayAbilityTargetDataHandleCallFunc_AppendTargetDataHandle_ReturnValue                      (None)
// struct FGameplayAbilityTargetDataHandleCallFunc_AbilityTargetDataFromName_ReturnValue                   (None)
// struct FGameplayAbilityTargetDataHandleCallFunc_AppendTargetDataHandle_ReturnValue_1                    (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleCallFunc_AbilityTargetDataFromHitResult_ReturnValue              (None)
// struct FGameplayAbilityTargetDataHandleCallFunc_AppendTargetDataHandle_ReturnValue_2                    (None)

void ABPTA_SwingMelee_C::ConfirmAndSendTargetData(struct FGameplayAbilityTargetDataHandle* TargetData, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromBool_ReturnValue, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromInt_ReturnValue, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromBool_ReturnValue_1, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromGameplayTag_ReturnValue, const struct FGameplayAbilityTargetDataHandle& CallFunc_AppendTargetDataHandle_ReturnValue, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromName_ReturnValue, const struct FGameplayAbilityTargetDataHandle& CallFunc_AppendTargetDataHandle_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromHitResult_ReturnValue, const struct FGameplayAbilityTargetDataHandle& CallFunc_AppendTargetDataHandle_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_SwingMelee_C", "ConfirmAndSendTargetData");

	Params::ABPTA_SwingMelee_C_ConfirmAndSendTargetData_Params Parms{};

	Parms.CallFunc_AbilityTargetDataFromBool_ReturnValue = CallFunc_AbilityTargetDataFromBool_ReturnValue;
	Parms.CallFunc_AbilityTargetDataFromInt_ReturnValue = CallFunc_AbilityTargetDataFromInt_ReturnValue;
	Parms.CallFunc_AbilityTargetDataFromBool_ReturnValue_1 = CallFunc_AbilityTargetDataFromBool_ReturnValue_1;
	Parms.CallFunc_AbilityTargetDataFromGameplayTag_ReturnValue = CallFunc_AbilityTargetDataFromGameplayTag_ReturnValue;
	Parms.CallFunc_AppendTargetDataHandle_ReturnValue = CallFunc_AppendTargetDataHandle_ReturnValue;
	Parms.CallFunc_AbilityTargetDataFromName_ReturnValue = CallFunc_AbilityTargetDataFromName_ReturnValue;
	Parms.CallFunc_AppendTargetDataHandle_ReturnValue_1 = CallFunc_AppendTargetDataHandle_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_AbilityTargetDataFromHitResult_ReturnValue = CallFunc_AbilityTargetDataFromHitResult_ReturnValue;
	Parms.CallFunc_AppendTargetDataHandle_ReturnValue_2 = CallFunc_AppendTargetDataHandle_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (TargetData != nullptr)
		*TargetData = std::move(Parms.TargetData);

}


// Function BPTA_SwingMelee.BPTA_SwingMelee_C.OnNotifyEnd_F48C8B694ED7B7B45A4B33B59C921633
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTA_SwingMelee_C::OnNotifyEnd_F48C8B694ED7B7B45A4B33B59C921633(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_SwingMelee_C", "OnNotifyEnd_F48C8B694ED7B7B45A4B33B59C921633");

	Params::ABPTA_SwingMelee_C_OnNotifyEnd_F48C8B694ED7B7B45A4B33B59C921633_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTA_SwingMelee.BPTA_SwingMelee_C.OnNotifyBegin_F48C8B694ED7B7B45A4B33B59C921633
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTA_SwingMelee_C::OnNotifyBegin_F48C8B694ED7B7B45A4B33B59C921633(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_SwingMelee_C", "OnNotifyBegin_F48C8B694ED7B7B45A4B33B59C921633");

	Params::ABPTA_SwingMelee_C_OnNotifyBegin_F48C8B694ED7B7B45A4B33B59C921633_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTA_SwingMelee.BPTA_SwingMelee_C.OnInterrupted_F48C8B694ED7B7B45A4B33B59C921633
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTA_SwingMelee_C::OnInterrupted_F48C8B694ED7B7B45A4B33B59C921633(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_SwingMelee_C", "OnInterrupted_F48C8B694ED7B7B45A4B33B59C921633");

	Params::ABPTA_SwingMelee_C_OnInterrupted_F48C8B694ED7B7B45A4B33B59C921633_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTA_SwingMelee.BPTA_SwingMelee_C.OnBlendOut_F48C8B694ED7B7B45A4B33B59C921633
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTA_SwingMelee_C::OnBlendOut_F48C8B694ED7B7B45A4B33B59C921633(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_SwingMelee_C", "OnBlendOut_F48C8B694ED7B7B45A4B33B59C921633");

	Params::ABPTA_SwingMelee_C_OnBlendOut_F48C8B694ED7B7B45A4B33B59C921633_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTA_SwingMelee.BPTA_SwingMelee_C.OnCompleted_F48C8B694ED7B7B45A4B33B59C921633
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTA_SwingMelee_C::OnCompleted_F48C8B694ED7B7B45A4B33B59C921633(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_SwingMelee_C", "OnCompleted_F48C8B694ED7B7B45A4B33B59C921633");

	Params::ABPTA_SwingMelee_C_OnCompleted_F48C8B694ED7B7B45A4B33B59C921633_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTA_SwingMelee.BPTA_SwingMelee_C.OnNotifyEnd_816834F147F4F0463DB2F1A586F37597
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTA_SwingMelee_C::OnNotifyEnd_816834F147F4F0463DB2F1A586F37597(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_SwingMelee_C", "OnNotifyEnd_816834F147F4F0463DB2F1A586F37597");

	Params::ABPTA_SwingMelee_C_OnNotifyEnd_816834F147F4F0463DB2F1A586F37597_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTA_SwingMelee.BPTA_SwingMelee_C.OnNotifyBegin_816834F147F4F0463DB2F1A586F37597
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTA_SwingMelee_C::OnNotifyBegin_816834F147F4F0463DB2F1A586F37597(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_SwingMelee_C", "OnNotifyBegin_816834F147F4F0463DB2F1A586F37597");

	Params::ABPTA_SwingMelee_C_OnNotifyBegin_816834F147F4F0463DB2F1A586F37597_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTA_SwingMelee.BPTA_SwingMelee_C.OnInterrupted_816834F147F4F0463DB2F1A586F37597
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTA_SwingMelee_C::OnInterrupted_816834F147F4F0463DB2F1A586F37597(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_SwingMelee_C", "OnInterrupted_816834F147F4F0463DB2F1A586F37597");

	Params::ABPTA_SwingMelee_C_OnInterrupted_816834F147F4F0463DB2F1A586F37597_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTA_SwingMelee.BPTA_SwingMelee_C.OnBlendOut_816834F147F4F0463DB2F1A586F37597
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTA_SwingMelee_C::OnBlendOut_816834F147F4F0463DB2F1A586F37597(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_SwingMelee_C", "OnBlendOut_816834F147F4F0463DB2F1A586F37597");

	Params::ABPTA_SwingMelee_C_OnBlendOut_816834F147F4F0463DB2F1A586F37597_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTA_SwingMelee.BPTA_SwingMelee_C.OnCompleted_816834F147F4F0463DB2F1A586F37597
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTA_SwingMelee_C::OnCompleted_816834F147F4F0463DB2F1A586F37597(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_SwingMelee_C", "OnCompleted_816834F147F4F0463DB2F1A586F37597");

	Params::ABPTA_SwingMelee_C_OnCompleted_816834F147F4F0463DB2F1A586F37597_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTA_SwingMelee.BPTA_SwingMelee_C.ReceiveStartTargeting
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UGameplayAbility*            Ability                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABPTA_SwingMelee_C::ReceiveStartTargeting(class UGameplayAbility* Ability)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_SwingMelee_C", "ReceiveStartTargeting");

	Params::ABPTA_SwingMelee_C_ReceiveStartTargeting_Params Parms{};

	Parms.Ability = Ability;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTA_SwingMelee.BPTA_SwingMelee_C.FinishedAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPTA_SwingMelee_C::FinishedAttack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_SwingMelee_C", "FinishedAttack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPTA_SwingMelee.BPTA_SwingMelee_C.StartedAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPTA_SwingMelee_C::StartedAttack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_SwingMelee_C", "StartedAttack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPTA_SwingMelee.BPTA_SwingMelee_C.SocketTraceHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  HitResult                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABPTA_SwingMelee_C::SocketTraceHit(const struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_SwingMelee_C", "SocketTraceHit");

	Params::ABPTA_SwingMelee_C_SocketTraceHit_Params Parms{};

	Parms.HitResult = HitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTA_SwingMelee.BPTA_SwingMelee_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTA_SwingMelee_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_SwingMelee_C", "ReceiveEndPlay");

	Params::ABPTA_SwingMelee_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTA_SwingMelee.BPTA_SwingMelee_C.StartComboWindow
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     NotifyObject                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABPTA_SwingMelee_C::StartComboWindow(class UObject* NotifyObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_SwingMelee_C", "StartComboWindow");

	Params::ABPTA_SwingMelee_C_StartComboWindow_Params Parms{};

	Parms.NotifyObject = NotifyObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTA_SwingMelee.BPTA_SwingMelee_C.OnComboInput
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPTA_SwingMelee_C::OnComboInput()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_SwingMelee_C", "OnComboInput");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPTA_SwingMelee.BPTA_SwingMelee_C.FinishComboWindow
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPTA_SwingMelee_C::FinishComboWindow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_SwingMelee_C", "FinishComboWindow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPTA_SwingMelee.BPTA_SwingMelee_C.PlayLocalMontage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                FPMontage                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                TPMontage                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABPTA_SwingMelee_C::PlayLocalMontage(class UAnimMontage* FPMontage, class UAnimMontage* TPMontage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_SwingMelee_C", "PlayLocalMontage");

	Params::ABPTA_SwingMelee_C_PlayLocalMontage_Params Parms{};

	Parms.FPMontage = FPMontage;
	Parms.TPMontage = TPMontage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTA_SwingMelee.BPTA_SwingMelee_C.ExecuteUbergraph_BPTA_SwingMelee
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckIfTargetHasBeenHit_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameplayAbility*            K2Node_Event_Ability                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGA_SwingMeleeWeapon_C*      K2Node_DynamicCast_AsGA_Swing_Melee_Weapon                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_CustomEvent_HitResult                                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AreAutomatedTestsRunning_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_NotifyObject                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UANS_ComboWindow_C*          K2Node_DynamicCast_AsANS_Combo_Window                            (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BlendIntoSection_BlendIntoSection                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ComboOnInput_ComboOnInput                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldUpdateMontage_bReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_ShouldUpdateMontage_NewMontageAction                    (NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_ShouldUpdateMontage_NewFPMontage                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_ShouldUpdateMontage_NewTPMontage                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_CustomEvent_FPMontage                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_CustomEvent_TPMontage                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_StartSocketTrace_Succeeded                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetComboSection_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IncrementCounter_IncrementCounter                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HitShouldStopSwing_ShouldStopSwing                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_Get_Anim_Info_FPAnimInstance                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_Get_Anim_Info_FPActiveMontage                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Get_Anim_Info_FPCurrentSectionName                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_Get_Anim_Info_TPAnimInstance                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_Get_Anim_Info_TPActiveMontage                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Get_Anim_Info_TPCurrentSectionName                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetTPMesh_SkeletalMesh                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetSK_HMM_FP_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldCombo_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetThirdPersonEnabled_bIsEnabled                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetThirdPersonEnabled_bIsEnabled_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_9                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_14                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Montage_Stop_InBlendOutTime_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Montage_Stop_InBlendOutTime_ImplicitCast_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTA_SwingMelee_C::ExecuteUbergraph_BPTA_SwingMelee(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable, bool CallFunc_CheckIfTargetHasBeenHit_ReturnValue, int32 Temp_int_Variable, class UGameplayAbility* K2Node_Event_Ability, class UGA_SwingMeleeWeapon_C* K2Node_DynamicCast_AsGA_Swing_Melee_Weapon, bool K2Node_DynamicCast_bSuccess, class FName Temp_name_Variable_1, const struct FHitResult& K2Node_CustomEvent_HitResult, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_AreAutomatedTestsRunning_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_HasAuthority_ReturnValue, class UObject* K2Node_CustomEvent_NotifyObject, class UANS_ComboWindow_C* K2Node_DynamicCast_AsANS_Combo_Window, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsServer_ReturnValue, bool CallFunc_BlendIntoSection_BlendIntoSection, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FName K2Node_CustomEvent_NotifyName_5, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_ComboOnInput_ComboOnInput, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_ShouldUpdateMontage_bReturnValue, const struct FGameplayTag& CallFunc_ShouldUpdateMontage_NewMontageAction, class UAnimMontage* CallFunc_ShouldUpdateMontage_NewFPMontage, class UAnimMontage* CallFunc_ShouldUpdateMontage_NewTPMontage, class UAnimMontage* K2Node_CustomEvent_FPMontage, class UAnimMontage* K2Node_CustomEvent_TPMontage, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, bool CallFunc_StartSocketTrace_Succeeded, class FName K2Node_CustomEvent_NotifyName_7, class FName CallFunc_GetComboSection_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class FName K2Node_CustomEvent_NotifyName_8, bool CallFunc_IncrementCounter_IncrementCounter, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_HitShouldStopSwing_ShouldStopSwing, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class UAnimInstance* CallFunc_Get_Anim_Info_FPAnimInstance, class UAnimMontage* CallFunc_Get_Anim_Info_FPActiveMontage, class FName CallFunc_Get_Anim_Info_FPCurrentSectionName, class UAnimInstance* CallFunc_Get_Anim_Info_TPAnimInstance, class UAnimMontage* CallFunc_Get_Anim_Info_TPActiveMontage, class FName CallFunc_Get_Anim_Info_TPCurrentSectionName, class USkeletalMeshComponent* CallFunc_GetTPMesh_SkeletalMesh, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, class USkeletalMeshComponent* CallFunc_GetSK_HMM_FP_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_ShouldCombo_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_GetThirdPersonEnabled_bIsEnabled, bool CallFunc_GetThirdPersonEnabled_bIsEnabled_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class FName K2Node_CustomEvent_NotifyName_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, bool CallFunc_IsValid_ReturnValue_2, float CallFunc_Montage_Stop_InBlendOutTime_ImplicitCast, float CallFunc_Montage_Stop_InBlendOutTime_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_SwingMelee_C", "ExecuteUbergraph_BPTA_SwingMelee");

	Params::ABPTA_SwingMelee_C_ExecuteUbergraph_BPTA_SwingMelee_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_NotifyName_4 = K2Node_CustomEvent_NotifyName_4;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_NotifyName_3 = K2Node_CustomEvent_NotifyName_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_NotifyName_2 = K2Node_CustomEvent_NotifyName_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_NotifyName_1 = K2Node_CustomEvent_NotifyName_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_NotifyName = K2Node_CustomEvent_NotifyName;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_CheckIfTargetHasBeenHit_ReturnValue = CallFunc_CheckIfTargetHasBeenHit_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_Event_Ability = K2Node_Event_Ability;
	Parms.K2Node_DynamicCast_AsGA_Swing_Melee_Weapon = K2Node_DynamicCast_AsGA_Swing_Melee_Weapon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.K2Node_CustomEvent_HitResult = K2Node_CustomEvent_HitResult;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_AreAutomatedTestsRunning_ReturnValue = CallFunc_AreAutomatedTestsRunning_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_CustomEvent_NotifyObject = K2Node_CustomEvent_NotifyObject;
	Parms.K2Node_DynamicCast_AsANS_Combo_Window = K2Node_DynamicCast_AsANS_Combo_Window;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_BlendIntoSection_BlendIntoSection = CallFunc_BlendIntoSection_BlendIntoSection;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_CustomEvent_NotifyName_5 = K2Node_CustomEvent_NotifyName_5;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_ComboOnInput_ComboOnInput = CallFunc_ComboOnInput_ComboOnInput;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_ShouldUpdateMontage_bReturnValue = CallFunc_ShouldUpdateMontage_bReturnValue;
	Parms.CallFunc_ShouldUpdateMontage_NewMontageAction = CallFunc_ShouldUpdateMontage_NewMontageAction;
	Parms.CallFunc_ShouldUpdateMontage_NewFPMontage = CallFunc_ShouldUpdateMontage_NewFPMontage;
	Parms.CallFunc_ShouldUpdateMontage_NewTPMontage = CallFunc_ShouldUpdateMontage_NewTPMontage;
	Parms.K2Node_CustomEvent_FPMontage = K2Node_CustomEvent_FPMontage;
	Parms.K2Node_CustomEvent_TPMontage = K2Node_CustomEvent_TPMontage;
	Parms.K2Node_CustomEvent_NotifyName_6 = K2Node_CustomEvent_NotifyName_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_StartSocketTrace_Succeeded = CallFunc_StartSocketTrace_Succeeded;
	Parms.K2Node_CustomEvent_NotifyName_7 = K2Node_CustomEvent_NotifyName_7;
	Parms.CallFunc_GetComboSection_ReturnValue = CallFunc_GetComboSection_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.K2Node_CustomEvent_NotifyName_8 = K2Node_CustomEvent_NotifyName_8;
	Parms.CallFunc_IncrementCounter_IncrementCounter = CallFunc_IncrementCounter_IncrementCounter;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_HitShouldStopSwing_ShouldStopSwing = CallFunc_HitShouldStopSwing_ShouldStopSwing;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_BoneName = CallFunc_BreakHitResult_BoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = CallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_Get_Anim_Info_FPAnimInstance = CallFunc_Get_Anim_Info_FPAnimInstance;
	Parms.CallFunc_Get_Anim_Info_FPActiveMontage = CallFunc_Get_Anim_Info_FPActiveMontage;
	Parms.CallFunc_Get_Anim_Info_FPCurrentSectionName = CallFunc_Get_Anim_Info_FPCurrentSectionName;
	Parms.CallFunc_Get_Anim_Info_TPAnimInstance = CallFunc_Get_Anim_Info_TPAnimInstance;
	Parms.CallFunc_Get_Anim_Info_TPActiveMontage = CallFunc_Get_Anim_Info_TPActiveMontage;
	Parms.CallFunc_Get_Anim_Info_TPCurrentSectionName = CallFunc_Get_Anim_Info_TPCurrentSectionName;
	Parms.CallFunc_GetTPMesh_SkeletalMesh = CallFunc_GetTPMesh_SkeletalMesh;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetSK_HMM_FP_ReturnValue = CallFunc_GetSK_HMM_FP_ReturnValue;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1;
	Parms.CallFunc_ShouldCombo_ReturnValue = CallFunc_ShouldCombo_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetThirdPersonEnabled_bIsEnabled = CallFunc_GetThirdPersonEnabled_bIsEnabled;
	Parms.CallFunc_GetThirdPersonEnabled_bIsEnabled_1 = CallFunc_GetThirdPersonEnabled_bIsEnabled_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.K2Node_CustomEvent_NotifyName_9 = K2Node_CustomEvent_NotifyName_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.K2Node_CreateDelegate_OutputDelegate_14 = K2Node_CreateDelegate_OutputDelegate_14;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Montage_Stop_InBlendOutTime_ImplicitCast = CallFunc_Montage_Stop_InBlendOutTime_ImplicitCast;
	Parms.CallFunc_Montage_Stop_InBlendOutTime_ImplicitCast_1 = CallFunc_Montage_Stop_InBlendOutTime_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ItemProxy_Simple_Torch.BP_ItemProxy_Simple_Torch_C
// (Actor)

class UClass* ABP_ItemProxy_Simple_Torch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ItemProxy_Simple_Torch_C");

	return Clss;
}


// BP_ItemProxy_Simple_Torch_C BP_ItemProxy_Simple_Torch.Default__BP_ItemProxy_Simple_Torch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ItemProxy_Simple_Torch_C* ABP_ItemProxy_Simple_Torch_C::GetDefaultObj()
{
	static class ABP_ItemProxy_Simple_Torch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ItemProxy_Simple_Torch_C*>(ABP_ItemProxy_Simple_Torch_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ItemProxy_Simple_Torch.BP_ItemProxy_Simple_Torch_C.Water Check
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Temp_struct_Variable                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UObject*>             Temp_object_Variable                                             (ConstParm, ReferenceParm)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_NWXLineTraceSingle_OutHit                               (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_NWXLineTraceSingle_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemProxy_Simple_Torch_C::Water_Check(const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, TArray<class UObject*>& Temp_object_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_NWXLineTraceSingle_OutHit, bool CallFunc_NWXLineTraceSingle_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_Simple_Torch_C", "Water Check");

	Params::ABP_ItemProxy_Simple_Torch_C_Water_Check_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_NWXLineTraceSingle_OutHit = CallFunc_NWXLineTraceSingle_OutHit;
	Parms.CallFunc_NWXLineTraceSingle_ReturnValue = CallFunc_NWXLineTraceSingle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemProxy_Simple_Torch.BP_ItemProxy_Simple_Torch_C.SetupLightIntensity
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ManagerActor                                                     (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class UTimeOfDaySubsystem*         CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetTimeOfDayManagerFromSubsystem_ReturnValue            (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_TimeOfDayManager_C*      K2Node_DynamicCast_AsBP_Time_Of_Day_Manager                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTimeOfDaySubsystem*         CallFunc_GetWorldSubsystem_ReturnValue_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NotEqual_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NotEqual_DoubleDouble_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemProxy_Simple_Torch_C::SetupLightIntensity(class AActor* ManagerActor, class UTimeOfDaySubsystem* CallFunc_GetWorldSubsystem_ReturnValue, class AActor* CallFunc_GetTimeOfDayManagerFromSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ABP_TimeOfDayManager_C* K2Node_DynamicCast_AsBP_Time_Of_Day_Manager, bool K2Node_DynamicCast_bSuccess, class UTimeOfDaySubsystem* CallFunc_GetWorldSubsystem_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, double CallFunc_NotEqual_DoubleDouble_A_ImplicitCast, double CallFunc_NotEqual_DoubleDouble_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_Simple_Torch_C", "SetupLightIntensity");

	Params::ABP_ItemProxy_Simple_Torch_C_SetupLightIntensity_Params Parms{};

	Parms.ManagerActor = ManagerActor;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_GetTimeOfDayManagerFromSubsystem_ReturnValue = CallFunc_GetTimeOfDayManagerFromSubsystem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Time_Of_Day_Manager = K2Node_DynamicCast_AsBP_Time_Of_Day_Manager;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_1 = CallFunc_GetWorldSubsystem_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue = CallFunc_NotEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_NotEqual_DoubleDouble_A_ImplicitCast = CallFunc_NotEqual_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_NotEqual_DoubleDouble_B_ImplicitCast = CallFunc_NotEqual_DoubleDouble_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemProxy_Simple_Torch.BP_ItemProxy_Simple_Torch_C.FadeOutTorch
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostAkEvent_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemProxy_Simple_Torch_C::FadeOutTorch(TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, int32 CallFunc_PostAkEvent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_Simple_Torch_C", "FadeOutTorch");

	Params::ABP_ItemProxy_Simple_Torch_C_FadeOutTorch_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.CallFunc_PostAkEvent_ReturnValue = CallFunc_PostAkEvent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemProxy_Simple_Torch.BP_ItemProxy_Simple_Torch_C.UpdateLightIntensity
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CallFunc_GetNormalizedVisualTime_VisualTime                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ConvertNormalizedTimeto24Hr_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_B_ImplicitCast                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_A_ImplicitCast                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ConvertNormalizedTimeto24Hr_NormalizedTime_ImplicitCast (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetIntensity_NewIntensity_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NotEqual_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NotEqual_DoubleDouble_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemProxy_Simple_Torch_C::UpdateLightIntensity(double CallFunc_GetNormalizedVisualTime_VisualTime, bool CallFunc_IsValid_ReturnValue, float CallFunc_ConvertNormalizedTimeto24Hr_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, double CallFunc_Lerp_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, double CallFunc_Lerp_B_ImplicitCast, double CallFunc_Lerp_A_ImplicitCast, float CallFunc_ConvertNormalizedTimeto24Hr_NormalizedTime_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast, float CallFunc_SetIntensity_NewIntensity_ImplicitCast, double CallFunc_NotEqual_DoubleDouble_A_ImplicitCast, double CallFunc_NotEqual_DoubleDouble_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_Simple_Torch_C", "UpdateLightIntensity");

	Params::ABP_ItemProxy_Simple_Torch_C_UpdateLightIntensity_Params Parms{};

	Parms.CallFunc_GetNormalizedVisualTime_VisualTime = CallFunc_GetNormalizedVisualTime_VisualTime;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_ConvertNormalizedTimeto24Hr_ReturnValue = CallFunc_ConvertNormalizedTimeto24Hr_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue = CallFunc_NotEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Lerp_B_ImplicitCast = CallFunc_Lerp_B_ImplicitCast;
	Parms.CallFunc_Lerp_A_ImplicitCast = CallFunc_Lerp_A_ImplicitCast;
	Parms.CallFunc_ConvertNormalizedTimeto24Hr_NormalizedTime_ImplicitCast = CallFunc_ConvertNormalizedTimeto24Hr_NormalizedTime_ImplicitCast;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast = CallFunc_Lerp_Alpha_ImplicitCast;
	Parms.CallFunc_SetIntensity_NewIntensity_ImplicitCast = CallFunc_SetIntensity_NewIntensity_ImplicitCast;
	Parms.CallFunc_NotEqual_DoubleDouble_A_ImplicitCast = CallFunc_NotEqual_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_NotEqual_DoubleDouble_B_ImplicitCast = CallFunc_NotEqual_DoubleDouble_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemProxy_Simple_Torch.BP_ItemProxy_Simple_Torch_C.OnSpawnAudioLoaded
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*               LoadedAudio                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PostAkEventScoped_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemProxy_Simple_Torch_C::OnSpawnAudioLoaded(class UAkAudioEvent* LoadedAudio, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_PostAkEventScoped_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_Simple_Torch_C", "OnSpawnAudioLoaded");

	Params::ABP_ItemProxy_Simple_Torch_C_OnSpawnAudioLoaded_Params Parms{};

	Parms.LoadedAudio = LoadedAudio;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_PostAkEventScoped_ReturnValue = CallFunc_PostAkEventScoped_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemProxy_Simple_Torch.BP_ItemProxy_Simple_Torch_C.ClientLoadAndPlaySpawnedAudio
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UAkAudioEvent>FoundAudioEvent                                                  (Edit, BlueprintVisible, HasGetValueTypeHash)
// struct FGameplayTag                Context                                                          (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                AVFX_Tag                                                         (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       Temp_struct_Variable                                             (ConstParm)
// TArray<class UScriptStruct*>       K2Node_MakeArray_Array                                           (ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetPrimaryTaxonomyTagFromItemData_TaxonomyTag           (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetItemAVFXTag_ReturnValue                              (NoDestructor, HasGetValueTypeHash)
// TArray<struct FAffinityTableCellDataWrapper>CallFunc_QueryTable_OutMemoryPtrs                                (ReferenceParm)
// bool                               CallFunc_QueryTable_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FResourceAudioSpawned       CallFunc_GetTableCellData_OutData                                (None)
// TSoftObjectPtr<class UAkAudioEvent>CallFunc_ResolveTaggableSound_ReturnValue                        (UObjectWrapper, HasGetValueTypeHash)

void ABP_ItemProxy_Simple_Torch_C::ClientLoadAndPlaySpawnedAudio(TSoftObjectPtr<class UAkAudioEvent> FoundAudioEvent, const struct FGameplayTag& Context, const struct FGameplayTag& AVFX_Tag, const struct FGameplayTagContainer& Temp_struct_Variable, TArray<class UScriptStruct*>& K2Node_MakeArray_Array, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayTag& CallFunc_GetPrimaryTaxonomyTagFromItemData_TaxonomyTag, const struct FGameplayTag& CallFunc_GetItemAVFXTag_ReturnValue, TArray<struct FAffinityTableCellDataWrapper>& CallFunc_QueryTable_OutMemoryPtrs, bool CallFunc_QueryTable_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, const struct FResourceAudioSpawned& CallFunc_GetTableCellData_OutData, TSoftObjectPtr<class UAkAudioEvent> CallFunc_ResolveTaggableSound_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_Simple_Torch_C", "ClientLoadAndPlaySpawnedAudio");

	Params::ABP_ItemProxy_Simple_Torch_C_ClientLoadAndPlaySpawnedAudio_Params Parms{};

	Parms.FoundAudioEvent = FoundAudioEvent;
	Parms.Context = Context;
	Parms.AVFX_Tag = AVFX_Tag;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetPrimaryTaxonomyTagFromItemData_TaxonomyTag = CallFunc_GetPrimaryTaxonomyTagFromItemData_TaxonomyTag;
	Parms.CallFunc_GetItemAVFXTag_ReturnValue = CallFunc_GetItemAVFXTag_ReturnValue;
	Parms.CallFunc_QueryTable_OutMemoryPtrs = CallFunc_QueryTable_OutMemoryPtrs;
	Parms.CallFunc_QueryTable_ReturnValue = CallFunc_QueryTable_ReturnValue;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_GetTableCellData_OutData = CallFunc_GetTableCellData_OutData;
	Parms.CallFunc_ResolveTaggableSound_ReturnValue = CallFunc_ResolveTaggableSound_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemProxy_Simple_Torch.BP_ItemProxy_Simple_Torch_C.TrySchedulePhysicsTimeout
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimer_Time_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemProxy_Simple_Torch_C::TrySchedulePhysicsTimeout(const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_K2_SetTimer_Time_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_Simple_Torch_C", "TrySchedulePhysicsTimeout");

	Params::ABP_ItemProxy_Simple_Torch_C_TrySchedulePhysicsTimeout_Params Parms{};

	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_K2_SetTimer_Time_ImplicitCast = CallFunc_K2_SetTimer_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemProxy_Simple_Torch.BP_ItemProxy_Simple_Torch_C.DisablePhysics
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ItemProxy_Simple_Torch_C::DisablePhysics()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_Simple_Torch_C", "DisablePhysics");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ItemProxy_Simple_Torch.BP_ItemProxy_Simple_Torch_C.SetPhysicsTimeoutOnHit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             TimeoutInSeconds                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemProxy_Simple_Torch_C::SetPhysicsTimeoutOnHit(double TimeoutInSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_Simple_Torch_C", "SetPhysicsTimeoutOnHit");

	Params::ABP_ItemProxy_Simple_Torch_C_SetPhysicsTimeoutOnHit_Params Parms{};

	Parms.TimeoutInSeconds = TimeoutInSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemProxy_Simple_Torch.BP_ItemProxy_Simple_Torch_C.SpawnImpactVFX
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AActor*                      Self_Actor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTimeSeconds_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
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
// double                             CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTimeSeconds_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemProxy_Simple_Torch_C::SpawnImpactVFX(struct FHitResult& Hit, class AActor* Self_Actor, double CallFunc_GetTimeSeconds_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, double CallFunc_VSize_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_GetTimeSeconds_ReturnValue_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_Simple_Torch_C", "SpawnImpactVFX");

	Params::ABP_ItemProxy_Simple_Torch_C_SpawnImpactVFX_Params Parms{};

	Parms.Hit = Hit;
	Parms.Self_Actor = Self_Actor;
	Parms.CallFunc_GetTimeSeconds_ReturnValue = CallFunc_GetTimeSeconds_ReturnValue;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
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
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetTimeSeconds_ReturnValue_1 = CallFunc_GetTimeSeconds_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemProxy_Simple_Torch.BP_ItemProxy_Simple_Torch_C.OnWakeup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void ABP_ItemProxy_Simple_Torch_C::OnWakeup(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsServer_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_Simple_Torch_C", "OnWakeup");

	Params::ABP_ItemProxy_Simple_Torch_C_OnWakeup_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemProxy_Simple_Torch.BP_ItemProxy_Simple_Torch_C.Audio Event Loaded Roll Stop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*               AudioEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ItemProxy_Simple_Torch_C::Audio_Event_Loaded_Roll_Stop(class UAkAudioEvent* AudioEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_Simple_Torch_C", "Audio Event Loaded Roll Stop");

	Params::ABP_ItemProxy_Simple_Torch_C_Audio_Event_Loaded_Roll_Stop_Params Parms{};

	Parms.AudioEvent = AudioEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemProxy_Simple_Torch.BP_ItemProxy_Simple_Torch_C.Audio Event Loaded Roll Start
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*               AudioEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ItemProxy_Simple_Torch_C::Audio_Event_Loaded_Roll_Start(class UAkAudioEvent* AudioEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_Simple_Torch_C", "Audio Event Loaded Roll Start");

	Params::ABP_ItemProxy_Simple_Torch_C_Audio_Event_Loaded_Roll_Start_Params Parms{};

	Parms.AudioEvent = AudioEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemProxy_Simple_Torch.BP_ItemProxy_Simple_Torch_C.Audio Event Loaded Impact
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*               AudioEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ItemProxy_Simple_Torch_C::Audio_Event_Loaded_Impact(class UAkAudioEvent* AudioEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_Simple_Torch_C", "Audio Event Loaded Impact");

	Params::ABP_ItemProxy_Simple_Torch_C_Audio_Event_Loaded_Impact_Params Parms{};

	Parms.AudioEvent = AudioEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemProxy_Simple_Torch.BP_ItemProxy_Simple_Torch_C.LoadImpactAudioEvents
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UAkAudioEvent>TempSoftPath                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// struct FItemAudioPhysics           PhysicsItemAudio                                                 (Edit, BlueprintVisible)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UScriptStruct*>       K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FGameplayTagContainer       CallFunc_GetItemTraitsFromEntry_Traits                           (None)
// TSoftObjectPtr<class UAkAudioEvent>CallFunc_ResolveTaggableSound_ReturnValue                        (UObjectWrapper, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetItemTraitsFromEntry_Traits_1                         (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UAkAudioEvent>CallFunc_ResolveTaggableSound_ReturnValue_1                      (UObjectWrapper, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetItemTraitsFromEntry_Traits_2                         (None)
// TArray<class UScriptStruct*>       K2Node_MakeArray_Array_1                                         (ReferenceParm)
// TSoftObjectPtr<class UAkAudioEvent>CallFunc_ResolveTaggableSound_ReturnValue_2                      (UObjectWrapper, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetATRowAndColumnFromItemData_ATRow                     (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetATRowAndColumnFromItemData_ATColumn                  (NoDestructor, HasGetValueTypeHash)
// TArray<struct FAffinityTableCellDataWrapper>CallFunc_QueryTable_OutMemoryPtrs                                (ReferenceParm)
// bool                               CallFunc_QueryTable_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAffinityTableCellDataWrapper>CallFunc_QueryTable_OutMemoryPtrs_1                              (ReferenceParm)
// bool                               CallFunc_QueryTable_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemAudioPhysics           CallFunc_GetTableCellData_OutData                                (None)
// struct FItemAudioPhysics           CallFunc_GetTableCellData_OutData_1                              (None)
// bool                               CallFunc_MatchesTag_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_MinTimeBetweenImpacts_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemProxy_Simple_Torch_C::LoadImpactAudioEvents(TSoftObjectPtr<class UAkAudioEvent> TempSoftPath, const struct FItemAudioPhysics& PhysicsItemAudio, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue_1, bool CallFunc_IsValidSoftObjectReference_ReturnValue_2, TArray<class UScriptStruct*>& K2Node_MakeArray_Array, const struct FGameplayTagContainer& CallFunc_GetItemTraitsFromEntry_Traits, TSoftObjectPtr<class UAkAudioEvent> CallFunc_ResolveTaggableSound_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetItemTraitsFromEntry_Traits_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TSoftObjectPtr<class UAkAudioEvent> CallFunc_ResolveTaggableSound_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayTagContainer& CallFunc_GetItemTraitsFromEntry_Traits_2, TArray<class UScriptStruct*>& K2Node_MakeArray_Array_1, TSoftObjectPtr<class UAkAudioEvent> CallFunc_ResolveTaggableSound_ReturnValue_2, const struct FGameplayTag& CallFunc_GetATRowAndColumnFromItemData_ATRow, const struct FGameplayTag& CallFunc_GetATRowAndColumnFromItemData_ATColumn, TArray<struct FAffinityTableCellDataWrapper>& CallFunc_QueryTable_OutMemoryPtrs, bool CallFunc_QueryTable_ReturnValue, TArray<struct FAffinityTableCellDataWrapper>& CallFunc_QueryTable_OutMemoryPtrs_1, bool CallFunc_QueryTable_ReturnValue_1, const struct FItemAudioPhysics& CallFunc_GetTableCellData_OutData, const struct FItemAudioPhysics& CallFunc_GetTableCellData_OutData_1, bool CallFunc_MatchesTag_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, double K2Node_VariableSet_MinTimeBetweenImpacts_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_Simple_Torch_C", "LoadImpactAudioEvents");

	Params::ABP_ItemProxy_Simple_Torch_C_LoadImpactAudioEvents_Params Parms{};

	Parms.TempSoftPath = TempSoftPath;
	Parms.PhysicsItemAudio = PhysicsItemAudio;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue_1 = CallFunc_IsValidSoftObjectReference_ReturnValue_1;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue_2 = CallFunc_IsValidSoftObjectReference_ReturnValue_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetItemTraitsFromEntry_Traits = CallFunc_GetItemTraitsFromEntry_Traits;
	Parms.CallFunc_ResolveTaggableSound_ReturnValue = CallFunc_ResolveTaggableSound_ReturnValue;
	Parms.CallFunc_GetItemTraitsFromEntry_Traits_1 = CallFunc_GetItemTraitsFromEntry_Traits_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_ResolveTaggableSound_ReturnValue_1 = CallFunc_ResolveTaggableSound_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetItemTraitsFromEntry_Traits_2 = CallFunc_GetItemTraitsFromEntry_Traits_2;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_ResolveTaggableSound_ReturnValue_2 = CallFunc_ResolveTaggableSound_ReturnValue_2;
	Parms.CallFunc_GetATRowAndColumnFromItemData_ATRow = CallFunc_GetATRowAndColumnFromItemData_ATRow;
	Parms.CallFunc_GetATRowAndColumnFromItemData_ATColumn = CallFunc_GetATRowAndColumnFromItemData_ATColumn;
	Parms.CallFunc_QueryTable_OutMemoryPtrs = CallFunc_QueryTable_OutMemoryPtrs;
	Parms.CallFunc_QueryTable_ReturnValue = CallFunc_QueryTable_ReturnValue;
	Parms.CallFunc_QueryTable_OutMemoryPtrs_1 = CallFunc_QueryTable_OutMemoryPtrs_1;
	Parms.CallFunc_QueryTable_ReturnValue_1 = CallFunc_QueryTable_ReturnValue_1;
	Parms.CallFunc_GetTableCellData_OutData = CallFunc_GetTableCellData_OutData;
	Parms.CallFunc_GetTableCellData_OutData_1 = CallFunc_GetTableCellData_OutData_1;
	Parms.CallFunc_MatchesTag_ReturnValue = CallFunc_MatchesTag_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_VariableSet_MinTimeBetweenImpacts_ImplicitCast = K2Node_VariableSet_MinTimeBetweenImpacts_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemProxy_Simple_Torch.BP_ItemProxy_Simple_Torch_C.DestroyProxyItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ItemProxy_Simple_Torch_C::DestroyProxyItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_Simple_Torch_C", "DestroyProxyItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ItemProxy_Simple_Torch.BP_ItemProxy_Simple_Torch_C.Timeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_ItemProxy_Simple_Torch_C::Timeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_Simple_Torch_C", "Timeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ItemProxy_Simple_Torch.BP_ItemProxy_Simple_Torch_C.Timeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_ItemProxy_Simple_Torch_C::Timeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_Simple_Torch_C", "Timeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ItemProxy_Simple_Torch.BP_ItemProxy_Simple_Torch_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ItemProxy_Simple_Torch_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_Simple_Torch_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ItemProxy_Simple_Torch.BP_ItemProxy_Simple_Torch_C.BndEvt__Mesh_K2Node_ComponentBoundEvent_0_ComponentSleepSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         SleepingComponent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        BoneName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemProxy_Simple_Torch_C::BndEvt__Mesh_K2Node_ComponentBoundEvent_0_ComponentSleepSignature__DelegateSignature(class UPrimitiveComponent* SleepingComponent, class FName BoneName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_Simple_Torch_C", "BndEvt__Mesh_K2Node_ComponentBoundEvent_0_ComponentSleepSignature__DelegateSignature");

	Params::ABP_ItemProxy_Simple_Torch_C_BndEvt__Mesh_K2Node_ComponentBoundEvent_0_ComponentSleepSignature__DelegateSignature_Params Parms{};

	Parms.SleepingComponent = SleepingComponent;
	Parms.BoneName = BoneName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemProxy_Simple_Torch.BP_ItemProxy_Simple_Torch_C.BndEvt__Mesh_K2Node_ComponentBoundEvent_1_ComponentWakeSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         WakingComponent                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        BoneName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemProxy_Simple_Torch_C::BndEvt__Mesh_K2Node_ComponentBoundEvent_1_ComponentWakeSignature__DelegateSignature(class UPrimitiveComponent* WakingComponent, class FName BoneName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_Simple_Torch_C", "BndEvt__Mesh_K2Node_ComponentBoundEvent_1_ComponentWakeSignature__DelegateSignature");

	Params::ABP_ItemProxy_Simple_Torch_C_BndEvt__Mesh_K2Node_ComponentBoundEvent_1_ComponentWakeSignature__DelegateSignature_Params Parms{};

	Parms.WakingComponent = WakingComponent;
	Parms.BoneName = BoneName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemProxy_Simple_Torch.BP_ItemProxy_Simple_Torch_C.CrossServerDestroySelf
// (Net, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ItemProxy_Simple_Torch_C::CrossServerDestroySelf()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_Simple_Torch_C", "CrossServerDestroySelf");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ItemProxy_Simple_Torch.BP_ItemProxy_Simple_Torch_C.WakeEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ItemProxy_Simple_Torch_C::WakeEvent(class UObject* Structure, class AActor* Instigator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_Simple_Torch_C", "WakeEvent");

	Params::ABP_ItemProxy_Simple_Torch_C_WakeEvent_Params Parms{};

	Parms.Structure = Structure;
	Parms.Instigator = Instigator;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemProxy_Simple_Torch.BP_ItemProxy_Simple_Torch_C.BndEvt__BP_ItemProxy_Mesh_K2Node_ComponentBoundEvent_8_ComponentHitSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         HitComponent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     NormalImpulse                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_ItemProxy_Simple_Torch_C::BndEvt__BP_ItemProxy_Mesh_K2Node_ComponentBoundEvent_8_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_Simple_Torch_C", "BndEvt__BP_ItemProxy_Mesh_K2Node_ComponentBoundEvent_8_ComponentHitSignature__DelegateSignature");

	Params::ABP_ItemProxy_Simple_Torch_C_BndEvt__BP_ItemProxy_Mesh_K2Node_ComponentBoundEvent_8_ComponentHitSignature__DelegateSignature_Params Parms{};

	Parms.HitComponent = HitComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.NormalImpulse = NormalImpulse;
	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemProxy_Simple_Torch.BP_ItemProxy_Simple_Torch_C.BndEvt__BP_ItemProxy_Mesh_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  SweepResult                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_ItemProxy_Simple_Torch_C::BndEvt__BP_ItemProxy_Mesh_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_Simple_Torch_C", "BndEvt__BP_ItemProxy_Mesh_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");

	Params::ABP_ItemProxy_Simple_Torch_C_BndEvt__BP_ItemProxy_Mesh_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemProxy_Simple_Torch.BP_ItemProxy_Simple_Torch_C.BndEvt__BP_ItemProxy_Mesh_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemProxy_Simple_Torch_C::BndEvt__BP_ItemProxy_Mesh_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_Simple_Torch_C", "BndEvt__BP_ItemProxy_Mesh_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature");

	Params::ABP_ItemProxy_Simple_Torch_C_BndEvt__BP_ItemProxy_Mesh_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemProxy_Simple_Torch.BP_ItemProxy_Simple_Torch_C.Client_PickUpWaterSplashSpawn
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     PickerViewLocation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemProxy_Simple_Torch_C::Client_PickUpWaterSplashSpawn(const struct FVector& PickerViewLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_Simple_Torch_C", "Client_PickUpWaterSplashSpawn");

	Params::ABP_ItemProxy_Simple_Torch_C_Client_PickUpWaterSplashSpawn_Params Parms{};

	Parms.PickerViewLocation = PickerViewLocation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemProxy_Simple_Torch.BP_ItemProxy_Simple_Torch_C.MulticastSpawnAudio
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ItemProxy_Simple_Torch_C::MulticastSpawnAudio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_Simple_Torch_C", "MulticastSpawnAudio");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ItemProxy_Simple_Torch.BP_ItemProxy_Simple_Torch_C.StructureMovedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     MovedEntity                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ItemProxy_Simple_Torch_C::StructureMovedEvent(class UObject* MovedEntity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_Simple_Torch_C", "StructureMovedEvent");

	Params::ABP_ItemProxy_Simple_Torch_C_StructureMovedEvent_Params Parms{};

	Parms.MovedEntity = MovedEntity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemProxy_Simple_Torch.BP_ItemProxy_Simple_Torch_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_ItemProxy_Simple_Torch_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_Simple_Torch_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ItemProxy_Simple_Torch.BP_ItemProxy_Simple_Torch_C.FadeLight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ItemProxy_Simple_Torch_C::FadeLight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_Simple_Torch_C", "FadeLight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ItemProxy_Simple_Torch.BP_ItemProxy_Simple_Torch_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemProxy_Simple_Torch_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_Simple_Torch_C", "ReceiveTick");

	Params::ABP_ItemProxy_Simple_Torch_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemProxy_Simple_Torch.BP_ItemProxy_Simple_Torch_C.ExecuteUbergraph_BP_ItemProxy_Simple_Torch
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetLifeSpan_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_SleepingComponent                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_BoneName_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_WakingComponent                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_BoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Structure                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_Instigator                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_HitComponent                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor_2                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp_2                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_ComponentBoundEvent_NormalImpulse                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_ComponentBoundEvent_Hit                                   (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent_1                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor_1                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp_1                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bFromSweep                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_ComponentBoundEvent_SweepResult                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnyRigidBodyAwake_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UObject*>             Temp_object_Variable                                             (ConstParm, ReferenceParm)
// struct FLinearColor                Temp_struct_Variable_2                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_3                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_PickerViewLocation                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_MovedEntity                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PostAkEventScoped_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_NWXLineTraceSingle_OutHit                               (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_NWXLineTraceSingle_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UObject*>             Temp_object_Variable_1                                           (ConstParm, ReferenceParm)
// TArray<struct FHitResult>          CallFunc_NWXMultiSphereTraceByChannel_OutHits                    (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_NWXMultiSphereTraceByChannel_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_Array_Get_Item                                          (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetHitObject_OutObject                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IPlaceableEntityInterface>K2Node_DynamicCast_AsPlaceable_Entity_Interface                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureEventInterface>K2Node_DynamicCast_AsStructure_Event_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureEventsObject*      CallFunc_GetStructureEventsObject_ReturnValue                    (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemProxy_Simple_Torch_C::ExecuteUbergraph_BP_ItemProxy_Simple_Torch(int32 EntryPoint, float CallFunc_GetLifeSpan_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_SleepingComponent, class FName K2Node_ComponentBoundEvent_BoneName_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_WakingComponent, class FName K2Node_ComponentBoundEvent_BoneName, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UObject* K2Node_CustomEvent_Structure, class AActor* K2Node_CustomEvent_Instigator, class UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor_2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_2, const struct FVector& K2Node_ComponentBoundEvent_NormalImpulse, const struct FHitResult& K2Node_ComponentBoundEvent_Hit, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsAnyRigidBodyAwake_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UObject*>& Temp_object_Variable, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& Temp_struct_Variable_3, const struct FVector& K2Node_CustomEvent_PickerViewLocation, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_IsServer_ReturnValue, class UObject* K2Node_CustomEvent_MovedEntity, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float K2Node_Event_DeltaSeconds, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_PostAkEventScoped_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_NWXLineTraceSingle_OutHit, bool CallFunc_NWXLineTraceSingle_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, TArray<class UObject*>& Temp_object_Variable_1, TArray<struct FHitResult>& CallFunc_NWXMultiSphereTraceByChannel_OutHits, bool CallFunc_NWXMultiSphereTraceByChannel_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FHitResult& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UObject* CallFunc_GetHitObject_OutObject, TScriptInterface<class IPlaceableEntityInterface> K2Node_DynamicCast_AsPlaceable_Entity_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IStructureEventInterface> K2Node_DynamicCast_AsStructure_Event_Interface, bool K2Node_DynamicCast_bSuccess_1, class UStructureEventsObject* CallFunc_GetStructureEventsObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_Simple_Torch_C", "ExecuteUbergraph_BP_ItemProxy_Simple_Torch");

	Params::ABP_ItemProxy_Simple_Torch_C_ExecuteUbergraph_BP_ItemProxy_Simple_Torch_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetLifeSpan_ReturnValue = CallFunc_GetLifeSpan_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_1 = CallFunc_IsDedicatedServer_ReturnValue_1;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_SleepingComponent = K2Node_ComponentBoundEvent_SleepingComponent;
	Parms.K2Node_ComponentBoundEvent_BoneName_1 = K2Node_ComponentBoundEvent_BoneName_1;
	Parms.K2Node_ComponentBoundEvent_WakingComponent = K2Node_ComponentBoundEvent_WakingComponent;
	Parms.K2Node_ComponentBoundEvent_BoneName = K2Node_ComponentBoundEvent_BoneName;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_CustomEvent_Structure = K2Node_CustomEvent_Structure;
	Parms.K2Node_CustomEvent_Instigator = K2Node_CustomEvent_Instigator;
	Parms.K2Node_ComponentBoundEvent_HitComponent = K2Node_ComponentBoundEvent_HitComponent;
	Parms.K2Node_ComponentBoundEvent_OtherActor_2 = K2Node_ComponentBoundEvent_OtherActor_2;
	Parms.K2Node_ComponentBoundEvent_OtherComp_2 = K2Node_ComponentBoundEvent_OtherComp_2;
	Parms.K2Node_ComponentBoundEvent_NormalImpulse = K2Node_ComponentBoundEvent_NormalImpulse;
	Parms.K2Node_ComponentBoundEvent_Hit = K2Node_ComponentBoundEvent_Hit;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent_1 = K2Node_ComponentBoundEvent_OverlappedComponent_1;
	Parms.K2Node_ComponentBoundEvent_OtherActor_1 = K2Node_ComponentBoundEvent_OtherActor_1;
	Parms.K2Node_ComponentBoundEvent_OtherComp_1 = K2Node_ComponentBoundEvent_OtherComp_1;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex_1 = K2Node_ComponentBoundEvent_OtherBodyIndex_1;
	Parms.K2Node_ComponentBoundEvent_bFromSweep = K2Node_ComponentBoundEvent_bFromSweep;
	Parms.K2Node_ComponentBoundEvent_SweepResult = K2Node_ComponentBoundEvent_SweepResult;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent = K2Node_ComponentBoundEvent_OverlappedComponent;
	Parms.K2Node_ComponentBoundEvent_OtherActor = K2Node_ComponentBoundEvent_OtherActor;
	Parms.K2Node_ComponentBoundEvent_OtherComp = K2Node_ComponentBoundEvent_OtherComp;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex = K2Node_ComponentBoundEvent_OtherBodyIndex;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_IsAnyRigidBodyAwake_ReturnValue = CallFunc_IsAnyRigidBodyAwake_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.K2Node_CustomEvent_PickerViewLocation = K2Node_CustomEvent_PickerViewLocation;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_CustomEvent_MovedEntity = K2Node_CustomEvent_MovedEntity;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_PostAkEventScoped_ReturnValue = CallFunc_PostAkEventScoped_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_NWXLineTraceSingle_OutHit = CallFunc_NWXLineTraceSingle_OutHit;
	Parms.CallFunc_NWXLineTraceSingle_ReturnValue = CallFunc_NWXLineTraceSingle_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.CallFunc_NWXMultiSphereTraceByChannel_OutHits = CallFunc_NWXMultiSphereTraceByChannel_OutHits;
	Parms.CallFunc_NWXMultiSphereTraceByChannel_ReturnValue = CallFunc_NWXMultiSphereTraceByChannel_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetHitObject_OutObject = CallFunc_GetHitObject_OutObject;
	Parms.K2Node_DynamicCast_AsPlaceable_Entity_Interface = K2Node_DynamicCast_AsPlaceable_Entity_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsStructure_Event_Interface = K2Node_DynamicCast_AsStructure_Event_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetStructureEventsObject_ReturnValue = CallFunc_GetStructureEventsObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Subtract_DoubleDouble_A_ImplicitCast = CallFunc_Subtract_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast = CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemProxy_Simple_Torch.BP_ItemProxy_Simple_Torch_C.ItemClaimAttempted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ItemProxy_Simple_Torch_C::ItemClaimAttempted__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_Simple_Torch_C", "ItemClaimAttempted__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}



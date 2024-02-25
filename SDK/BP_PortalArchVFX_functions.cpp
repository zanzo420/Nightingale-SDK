#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PortalArchVFX.BP_PortalArchVFX_C
// (Actor)

class UClass* ABP_PortalArchVFX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PortalArchVFX_C");

	return Clss;
}


// BP_PortalArchVFX_C BP_PortalArchVFX.Default__BP_PortalArchVFX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PortalArchVFX_C* ABP_PortalArchVFX_C::GetDefaultObj()
{
	static class ABP_PortalArchVFX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PortalArchVFX_C*>(ABP_PortalArchVFX_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PortalArchVFX.BP_PortalArchVFX_C.CanClimb
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_PortalArchVFX_C::CanClimb()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalArchVFX_C", "CanClimb");

	Params::ABP_PortalArchVFX_C_CanClimb_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_PortalArchVFX.BP_PortalArchVFX_C.CanTraverse
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_PortalArchVFX_C::CanTraverse()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalArchVFX_C", "CanTraverse");

	Params::ABP_PortalArchVFX_C_CanTraverse_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_PortalArchVFX.BP_PortalArchVFX_C.GetSpawnTransforms
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FTransform>          SpawnTransforms                                                  (Parm, OutParm)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue_1                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue_2                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FTransform>          K2Node_MakeArray_Array                                           (ReferenceParm)

void ABP_PortalArchVFX_C::GetSpawnTransforms(TArray<struct FTransform>* SpawnTransforms, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_1, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_2, TArray<struct FTransform>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalArchVFX_C", "GetSpawnTransforms");

	Params::ABP_PortalArchVFX_C_GetSpawnTransforms_Params Parms{};

	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue_1 = CallFunc_K2_GetComponentToWorld_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue_2 = CallFunc_K2_GetComponentToWorld_ReturnValue_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (SpawnTransforms != nullptr)
		*SpawnTransforms = std::move(Parms.SpawnTransforms);

}


// Function BP_PortalArchVFX.BP_PortalArchVFX_C.GetRallyPointLocations
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>             RallyPointLocations                                              (Parm, OutParm)

void ABP_PortalArchVFX_C::GetRallyPointLocations(TArray<struct FVector>* RallyPointLocations)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalArchVFX_C", "GetRallyPointLocations");

	Params::ABP_PortalArchVFX_C_GetRallyPointLocations_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (RallyPointLocations != nullptr)
		*RallyPointLocations = std::move(Parms.RallyPointLocations);

}


// Function BP_PortalArchVFX.BP_PortalArchVFX_C.Get POI Rally Point
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Rally_Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PortalArchVFX_C::Get_POI_Rally_Point(struct FVector* Rally_Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalArchVFX_C", "Get POI Rally Point");

	Params::ABP_PortalArchVFX_C_Get_POI_Rally_Point_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Rally_Location != nullptr)
		*Rally_Location = std::move(Parms.Rally_Location);

}


// Function BP_PortalArchVFX.BP_PortalArchVFX_C.Get NPC Spawner
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CreatureSpawnerBase_C*   Spawner                                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PortalArchVFX_C::Get_NPC_Spawner(class ABP_CreatureSpawnerBase_C** Spawner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalArchVFX_C", "Get NPC Spawner");

	Params::ABP_PortalArchVFX_C_Get_NPC_Spawner_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Spawner != nullptr)
		*Spawner = Parms.Spawner;

}


// Function BP_PortalArchVFX.BP_PortalArchVFX_C.Get EQS Context
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Context_Actor                                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PortalArchVFX_C::Get_EQS_Context(class AActor** Context_Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalArchVFX_C", "Get EQS Context");

	Params::ABP_PortalArchVFX_C_Get_EQS_Context_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Context_Actor != nullptr)
		*Context_Actor = Parms.Context_Actor;

}


// Function BP_PortalArchVFX.BP_PortalArchVFX_C.Get Friendly Spawns
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FTransform>          Spawn_Points                                                     (Parm, OutParm)

void ABP_PortalArchVFX_C::Get_Friendly_Spawns(TArray<struct FTransform>* Spawn_Points)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalArchVFX_C", "Get Friendly Spawns");

	Params::ABP_PortalArchVFX_C_Get_Friendly_Spawns_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Spawn_Points != nullptr)
		*Spawn_Points = std::move(Parms.Spawn_Points);

}


// Function BP_PortalArchVFX.BP_PortalArchVFX_C.Get Hostile Spawns
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FTransform>          Spawn_Points                                                     (Parm, OutParm)

void ABP_PortalArchVFX_C::Get_Hostile_Spawns(TArray<struct FTransform>* Spawn_Points)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalArchVFX_C", "Get Hostile Spawns");

	Params::ABP_PortalArchVFX_C_Get_Hostile_Spawns_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Spawn_Points != nullptr)
		*Spawn_Points = std::move(Parms.Spawn_Points);

}


// Function BP_PortalArchVFX.BP_PortalArchVFX_C.Add to Population
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PortalArchVFX_C::Add_to_Population(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalArchVFX_C", "Add to Population");

	Params::ABP_PortalArchVFX_C_Add_to_Population_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_PortalArchVFX.BP_PortalArchVFX_C.Remove From Population
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PortalArchVFX_C::Remove_From_Population(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalArchVFX_C", "Remove From Population");

	Params::ABP_PortalArchVFX_C_Remove_From_Population_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_PortalArchVFX.BP_PortalArchVFX_C.Get Population
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABP_CreatureBase_C*>  Creatures                                                        (Parm, OutParm)

void ABP_PortalArchVFX_C::Get_Population(TArray<class ABP_CreatureBase_C*>* Creatures)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalArchVFX_C", "Get Population");

	Params::ABP_PortalArchVFX_C_Get_Population_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Creatures != nullptr)
		*Creatures = std::move(Parms.Creatures);

}


// Function BP_PortalArchVFX.BP_PortalArchVFX_C.OptionalStartChargingDialogue
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAudioDialogueSubsystem*     CallFunc_GetEngineSubsystem_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 Temp_delegate_Variable_1                                         (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PortalArchVFX_C::OptionalStartChargingDialogue(FDelegateProperty_ Temp_delegate_Variable, class UAudioDialogueSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, FDelegateProperty_ Temp_delegate_Variable_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalArchVFX_C", "OptionalStartChargingDialogue");

	Params::ABP_PortalArchVFX_C_OptionalStartChargingDialogue_Params Parms{};

	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;
	Parms.Temp_delegate_Variable_1 = Temp_delegate_Variable_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PortalArchVFX.BP_PortalArchVFX_C.TryUnsubscribeFromFocusMixing
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PortalArchVFX_C::TryUnsubscribeFromFocusMixing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalArchVFX_C", "TryUnsubscribeFromFocusMixing");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PortalArchVFX.BP_PortalArchVFX_C.TrySubscribeToFocusMixing
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PortalArchVFX_C::TrySubscribeToFocusMixing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalArchVFX_C", "TrySubscribeToFocusMixing");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PortalArchVFX.BP_PortalArchVFX_C.InitializeFocusMixing
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSuspended_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PortalArchVFX_C::InitializeFocusMixing(bool CallFunc_IsDedicatedServer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsSuspended_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalArchVFX_C", "InitializeFocusMixing");

	Params::ABP_PortalArchVFX_C_InitializeFocusMixing_Params Parms{};

	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsSuspended_ReturnValue = CallFunc_IsSuspended_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PortalArchVFX.BP_PortalArchVFX_C.RevokeMusicRTPCs
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMusicManager*               MusicManager                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMusicManager*               CallFunc_Get_Music_Manager_MusicManager                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_PortalArchVFX_C::RevokeMusicRTPCs(class UMusicManager* MusicManager, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UMusicManager* CallFunc_Get_Music_Manager_MusicManager)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalArchVFX_C", "RevokeMusicRTPCs");

	Params::ABP_PortalArchVFX_C_RevokeMusicRTPCs_Params Parms{};

	Parms.MusicManager = MusicManager;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Get_Music_Manager_MusicManager = CallFunc_Get_Music_Manager_MusicManager;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PortalArchVFX.BP_PortalArchVFX_C.UpdateMusicRTPCs
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMusicManager*               MusicManager                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryUpdateAzimuthRTPC_ReturnValue                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryUpdateDistanceRTPC_ReturnValue                       (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMusicManager*               CallFunc_Get_Music_Manager_MusicManager                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_PortalArchVFX_C::UpdateMusicRTPCs(class UMusicManager* MusicManager, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_TryUpdateAzimuthRTPC_ReturnValue, bool CallFunc_TryUpdateDistanceRTPC_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UMusicManager* CallFunc_Get_Music_Manager_MusicManager)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalArchVFX_C", "UpdateMusicRTPCs");

	Params::ABP_PortalArchVFX_C_UpdateMusicRTPCs_Params Parms{};

	Parms.MusicManager = MusicManager;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_TryUpdateAzimuthRTPC_ReturnValue = CallFunc_TryUpdateAzimuthRTPC_ReturnValue;
	Parms.CallFunc_TryUpdateDistanceRTPC_ReturnValue = CallFunc_TryUpdateDistanceRTPC_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Get_Music_Manager_MusicManager = CallFunc_Get_Music_Manager_MusicManager;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PortalArchVFX.BP_PortalArchVFX_C.OnRep_PortalState
// (HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void ABP_PortalArchVFX_C::OnRep_PortalState(bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalArchVFX_C", "OnRep_PortalState");

	Params::ABP_PortalArchVFX_C_OnRep_PortalState_Params Parms{};

	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PortalArchVFX.BP_PortalArchVFX_C.ClosePortalfromStandby
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable_1                                         (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable_1                                           (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable_2                                         (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostAkEvent_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable_2                                           (ConstParm, ReferenceParm)
// int32                              CallFunc_PostAkEvent_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostAkEvent_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PortalArchVFX_C::ClosePortalfromStandby(FDelegateProperty_ Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable_1, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_1, FDelegateProperty_ Temp_delegate_Variable_2, bool CallFunc_IsDedicatedServer_ReturnValue, int32 CallFunc_PostAkEvent_ReturnValue, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_2, int32 CallFunc_PostAkEvent_ReturnValue_1, int32 CallFunc_PostAkEvent_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalArchVFX_C", "ClosePortalfromStandby");

	Params::ABP_PortalArchVFX_C_ClosePortalfromStandby_Params Parms{};

	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_delegate_Variable_1 = Temp_delegate_Variable_1;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_delegate_Variable_2 = Temp_delegate_Variable_2;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_PostAkEvent_ReturnValue = CallFunc_PostAkEvent_ReturnValue;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.CallFunc_PostAkEvent_ReturnValue_1 = CallFunc_PostAkEvent_ReturnValue_1;
	Parms.CallFunc_PostAkEvent_ReturnValue_2 = CallFunc_PostAkEvent_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PortalArchVFX.BP_PortalArchVFX_C.StopStandby
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable_1                                         (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable_1                                           (ConstParm, ReferenceParm)
// int32                              CallFunc_PostAkEvent_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostAkEvent_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PortalArchVFX_C::StopStandby(FDelegateProperty_ Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable_1, bool CallFunc_IsDedicatedServer_ReturnValue, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_1, int32 CallFunc_PostAkEvent_ReturnValue, int32 CallFunc_PostAkEvent_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalArchVFX_C", "StopStandby");

	Params::ABP_PortalArchVFX_C_StopStandby_Params Parms{};

	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_delegate_Variable_1 = Temp_delegate_Variable_1;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_PostAkEvent_ReturnValue = CallFunc_PostAkEvent_ReturnValue;
	Parms.CallFunc_PostAkEvent_ReturnValue_1 = CallFunc_PostAkEvent_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PortalArchVFX.BP_PortalArchVFX_C.StartStandby
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PostAkEventScoped_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PostAkEventScoped_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PortalArchVFX_C::StartStandby(bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_PostAkEventScoped_ReturnValue, bool CallFunc_PostAkEventScoped_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalArchVFX_C", "StartStandby");

	Params::ABP_PortalArchVFX_C_StartStandby_Params Parms{};

	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_PostAkEventScoped_ReturnValue = CallFunc_PostAkEventScoped_ReturnValue;
	Parms.CallFunc_PostAkEventScoped_ReturnValue_1 = CallFunc_PostAkEventScoped_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PortalArchVFX.BP_PortalArchVFX_C.OptionalStartChargingAKEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PortalArchVFX_C::OptionalStartChargingAKEvent(FDelegateProperty_ Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_PostEvent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalArchVFX_C", "OptionalStartChargingAKEvent");

	Params::ABP_PortalArchVFX_C_OptionalStartChargingAKEvent_Params Parms{};

	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_PostEvent_ReturnValue = CallFunc_PostEvent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PortalArchVFX.BP_PortalArchVFX_C.SpawnVFX
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UNiagaraSystem>NiagaraSystem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    Rotation                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     VFX_BoxSize                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           NiagaraSystemSpawned                                             (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NVFX_SpawnSystem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_NVFX_SpawnSystem_NiagaraSystemSpawned                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PortalArchVFX_C::SpawnVFX(TSoftObjectPtr<class UNiagaraSystem> NiagaraSystem, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& VFX_BoxSize, class UNiagaraComponent** NiagaraSystemSpawned, bool CallFunc_NVFX_SpawnSystem_ReturnValue, class UNiagaraComponent* CallFunc_NVFX_SpawnSystem_NiagaraSystemSpawned, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalArchVFX_C", "SpawnVFX");

	Params::ABP_PortalArchVFX_C_SpawnVFX_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.Location = Location;
	Parms.Rotation = Rotation;
	Parms.VFX_BoxSize = VFX_BoxSize;
	Parms.CallFunc_NVFX_SpawnSystem_ReturnValue = CallFunc_NVFX_SpawnSystem_ReturnValue;
	Parms.CallFunc_NVFX_SpawnSystem_NiagaraSystemSpawned = CallFunc_NVFX_SpawnSystem_NiagaraSystemSpawned;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NiagaraSystemSpawned != nullptr)
		*NiagaraSystemSpawned = Parms.NiagaraSystemSpawned;

}


// Function BP_PortalArchVFX.BP_PortalArchVFX_C.CleanupVFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PortalArchVFX_C::CleanupVFX(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UNiagaraComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalArchVFX_C", "CleanupVFX");

	Params::ABP_PortalArchVFX_C_CleanupVFX_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PortalArchVFX.BP_PortalArchVFX_C.StopMusic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMusicManager*               MusicManager                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMusicManager*               CallFunc_Get_Music_Manager_MusicManager                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_PortalArchVFX_C::StopMusic(class UMusicManager* MusicManager, bool CallFunc_IsValid_ReturnValue, class UMusicManager* CallFunc_Get_Music_Manager_MusicManager)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalArchVFX_C", "StopMusic");

	Params::ABP_PortalArchVFX_C_StopMusic_Params Parms{};

	Parms.MusicManager = MusicManager;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Get_Music_Manager_MusicManager = CallFunc_Get_Music_Manager_MusicManager;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PortalArchVFX.BP_PortalArchVFX_C.StartMusic
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      LocalPlayerCharacter                                             (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_Music_Manager_C*         CallFunc_Get_BPMusic_Manager_MusicManager                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Vector_Distance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void ABP_PortalArchVFX_C::StartMusic(class AActor* LocalPlayerCharacter, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class UBP_Music_Manager_C* CallFunc_Get_BPMusic_Manager_MusicManager, double CallFunc_Vector_Distance_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalArchVFX_C", "StartMusic");

	Params::ABP_PortalArchVFX_C_StartMusic_Params Parms{};

	Parms.LocalPlayerCharacter = LocalPlayerCharacter;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_Get_BPMusic_Manager_MusicManager = CallFunc_Get_BPMusic_Manager_MusicManager;
	Parms.CallFunc_Vector_Distance_ReturnValue = CallFunc_Vector_Distance_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PortalArchVFX.BP_PortalArchVFX_C.ForceOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PostAkEventScoped_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PortalArchVFX_C::ForceOpen(bool CallFunc_IsDedicatedServer_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_PostAkEventScoped_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalArchVFX_C", "ForceOpen");

	Params::ABP_PortalArchVFX_C_ForceOpen_Params Parms{};

	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_PostAkEventScoped_ReturnValue = CallFunc_PostAkEventScoped_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PortalArchVFX.BP_PortalArchVFX_C.OpenPortal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PostAkEventScoped_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PostAkEventScoped_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PortalArchVFX_C::OpenPortal(bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_PostAkEventScoped_ReturnValue, bool CallFunc_PostAkEventScoped_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalArchVFX_C", "OpenPortal");

	Params::ABP_PortalArchVFX_C_OpenPortal_Params Parms{};

	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_PostAkEventScoped_ReturnValue = CallFunc_PostAkEventScoped_ReturnValue;
	Parms.CallFunc_PostAkEventScoped_ReturnValue_1 = CallFunc_PostAkEventScoped_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PortalArchVFX.BP_PortalArchVFX_C.StartChargingPortal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PostAkEventScoped_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInRange_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PostAkEventScoped_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PortalArchVFX_C::StartChargingPortal(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, double CallFunc_FMax_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_1, bool CallFunc_PostAkEventScoped_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_2, double CallFunc_SelectFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsInRange_ReturnValue, bool CallFunc_PostAkEventScoped_ReturnValue_1, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalArchVFX_C", "StartChargingPortal");

	Params::ABP_PortalArchVFX_C_StartChargingPortal_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_1 = CallFunc_IsDedicatedServer_ReturnValue_1;
	Parms.CallFunc_PostAkEventScoped_ReturnValue = CallFunc_PostAkEventScoped_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_2 = CallFunc_IsDedicatedServer_ReturnValue_2;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsInRange_ReturnValue = CallFunc_IsInRange_ReturnValue;
	Parms.CallFunc_PostAkEventScoped_ReturnValue_1 = CallFunc_PostAkEventScoped_ReturnValue_1;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1 = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PortalArchVFX.BP_PortalArchVFX_C.ClosePortal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// int32                              CallFunc_PostAkEvent_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PortalArchVFX_C::ClosePortal(FDelegateProperty_ Temp_delegate_Variable, bool CallFunc_IsDedicatedServer_ReturnValue, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, int32 CallFunc_PostAkEvent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalArchVFX_C", "ClosePortal");

	Params::ABP_PortalArchVFX_C_ClosePortal_Params Parms{};

	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_PostAkEvent_ReturnValue = CallFunc_PostAkEvent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PortalArchVFX.BP_PortalArchVFX_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable_1                                           (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXStaticMeshComponent*     CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNWXStaticMeshComponent*     CallFunc_AddComponent_ReturnValue_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable_2                                           (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable_3                                           (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXStaticMeshComponent*     CallFunc_AddComponent_ReturnValue_2                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNWXStaticMeshComponent*     CallFunc_AddComponent_ReturnValue_3                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable_4                                           (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable_5                                           (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXStaticMeshComponent*     CallFunc_AddComponent_ReturnValue_4                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNWXStaticMeshComponent*     CallFunc_AddComponent_ReturnValue_5                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class E_PortalShapes          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_PortalShapes          Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Temp_struct_Variable_6                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Temp_struct_Variable_7                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Temp_struct_Variable_8                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Temp_struct_Variable_9                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Temp_struct_Variable_10                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Temp_struct_Variable_11                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Temp_struct_Variable_12                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Temp_struct_Variable_13                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_PortalShapes          Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_10                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_11                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_12                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_13                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_14                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_15                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable_14                                          (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXStaticMeshComponent*     CallFunc_AddComponent_ReturnValue_6                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// double                             Temp_real_Variable_16                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// double                             Temp_real_Variable_17                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_18                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_19                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_20                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_21                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_AddLocalOffset_SweepHitResult                        (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              CallFunc_BreakRotator_Roll_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_22                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult_1                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// double                             Temp_real_Variable_23                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_AddLocalOffset_SweepHitResult_1                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              CallFunc_BreakRotator_Roll_2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult_2                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// enum class E_PortalShapes          Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_AddLocalOffset_SweepHitResult_2                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              CallFunc_BreakRotator_Roll_3                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult_3                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_MakeVector_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_AddLocalOffset_SweepHitResult_3                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue_4                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue_5                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll_4                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_4                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll_5                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_5                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_5                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult_4                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult_5                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_AddLocalOffset_SweepHitResult_4                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_AddLocalOffset_SweepHitResult_5                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXStaticMeshComponent*     CallFunc_AddComponent_ReturnValue_7                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Roll_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetBarnDoorLength_NewValue_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetBarnDoorLength_NewValue_ImplicitCast_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetSourceWidth_NewValue_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetSourceWidth_NewValue_ImplicitCast_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetSourceHeight_NewValue_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetSourceHeight_NewValue_ImplicitCast_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Roll_ImplicitCast_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Roll_ImplicitCast_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Roll_ImplicitCast_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Roll_ImplicitCast_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Roll_ImplicitCast_5                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PortalArchVFX_C::UserConstructionScript(const struct FTransform& Temp_struct_Variable, const struct FTransform& Temp_struct_Variable_1, class UNWXStaticMeshComponent* CallFunc_AddComponent_ReturnValue, class UNWXStaticMeshComponent* CallFunc_AddComponent_ReturnValue_1, const struct FTransform& Temp_struct_Variable_2, const struct FTransform& Temp_struct_Variable_3, class UNWXStaticMeshComponent* CallFunc_AddComponent_ReturnValue_2, class UNWXStaticMeshComponent* CallFunc_AddComponent_ReturnValue_3, const struct FTransform& Temp_struct_Variable_4, const struct FTransform& Temp_struct_Variable_5, class UNWXStaticMeshComponent* CallFunc_AddComponent_ReturnValue_4, class UNWXStaticMeshComponent* CallFunc_AddComponent_ReturnValue_5, enum class E_PortalShapes Temp_byte_Variable, double Temp_real_Variable, double Temp_real_Variable_1, double Temp_real_Variable_2, double Temp_real_Variable_3, double Temp_real_Variable_4, double Temp_real_Variable_5, double Temp_real_Variable_6, double Temp_real_Variable_7, enum class E_PortalShapes Temp_byte_Variable_1, const struct FVector& Temp_struct_Variable_6, const struct FVector& Temp_struct_Variable_7, const struct FVector& Temp_struct_Variable_8, const struct FVector& Temp_struct_Variable_9, const struct FVector& Temp_struct_Variable_10, const struct FVector& Temp_struct_Variable_11, const struct FVector& Temp_struct_Variable_12, const struct FVector& Temp_struct_Variable_13, enum class E_PortalShapes Temp_byte_Variable_2, double Temp_real_Variable_8, double Temp_real_Variable_9, double Temp_real_Variable_10, double Temp_real_Variable_11, double Temp_real_Variable_12, double Temp_real_Variable_13, double Temp_real_Variable_14, double Temp_real_Variable_15, const struct FTransform& Temp_struct_Variable_14, class UNWXStaticMeshComponent* CallFunc_AddComponent_ReturnValue_6, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, double Temp_real_Variable_16, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, double Temp_real_Variable_17, double Temp_real_Variable_18, double Temp_real_Variable_19, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue_3, const struct FVector& CallFunc_MakeVector_ReturnValue_4, double Temp_real_Variable_20, double Temp_real_Variable_21, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue_1, const struct FHitResult& CallFunc_K2_AddLocalOffset_SweepHitResult, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, double CallFunc_Add_DoubleDouble_ReturnValue_1, double Temp_real_Variable_22, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult_1, double Temp_real_Variable_23, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue_2, const struct FHitResult& CallFunc_K2_AddLocalOffset_SweepHitResult_1, float CallFunc_BreakRotator_Roll_2, float CallFunc_BreakRotator_Pitch_2, float CallFunc_BreakRotator_Yaw_2, double CallFunc_Add_DoubleDouble_ReturnValue_2, const struct FRotator& CallFunc_MakeRotator_ReturnValue_2, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult_2, enum class E_PortalShapes Temp_byte_Variable_3, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue_3, const struct FHitResult& CallFunc_K2_AddLocalOffset_SweepHitResult_2, float CallFunc_BreakRotator_Roll_3, float CallFunc_BreakRotator_Pitch_3, float CallFunc_BreakRotator_Yaw_3, double CallFunc_Add_DoubleDouble_ReturnValue_3, const struct FRotator& CallFunc_MakeRotator_ReturnValue_3, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult_3, const struct FVector& CallFunc_MakeVector_ReturnValue_5, const struct FHitResult& CallFunc_K2_AddLocalOffset_SweepHitResult_3, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue_4, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue_5, float CallFunc_BreakRotator_Roll_4, float CallFunc_BreakRotator_Pitch_4, float CallFunc_BreakRotator_Yaw_4, float CallFunc_BreakRotator_Roll_5, float CallFunc_BreakRotator_Pitch_5, float CallFunc_BreakRotator_Yaw_5, double CallFunc_Add_DoubleDouble_ReturnValue_4, double CallFunc_Add_DoubleDouble_ReturnValue_5, const struct FRotator& CallFunc_MakeRotator_ReturnValue_4, const struct FRotator& CallFunc_MakeRotator_ReturnValue_5, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult_4, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult_5, const struct FHitResult& CallFunc_K2_AddLocalOffset_SweepHitResult_4, const struct FHitResult& CallFunc_K2_AddLocalOffset_SweepHitResult_5, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UNWXStaticMeshComponent* CallFunc_AddComponent_ReturnValue_7, double K2Node_Select_Default, double K2Node_Select_Default_1, const struct FVector& K2Node_Select_Default_2, double K2Node_Select_Default_3, bool K2Node_SwitchEnum_CmpSuccess, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_MakeRotator_Roll_ImplicitCast, float CallFunc_SetBarnDoorLength_NewValue_ImplicitCast, float CallFunc_SetBarnDoorLength_NewValue_ImplicitCast_1, float CallFunc_SetSourceWidth_NewValue_ImplicitCast, float CallFunc_SetSourceWidth_NewValue_ImplicitCast_1, float CallFunc_SetSourceHeight_NewValue_ImplicitCast, float CallFunc_SetSourceHeight_NewValue_ImplicitCast_1, double CallFunc_Add_DoubleDouble_A_ImplicitCast_1, float CallFunc_MakeRotator_Roll_ImplicitCast_1, double CallFunc_Add_DoubleDouble_A_ImplicitCast_2, float CallFunc_MakeRotator_Roll_ImplicitCast_2, double CallFunc_Add_DoubleDouble_A_ImplicitCast_3, float CallFunc_MakeRotator_Roll_ImplicitCast_3, double CallFunc_Add_DoubleDouble_A_ImplicitCast_4, double CallFunc_Add_DoubleDouble_A_ImplicitCast_5, float CallFunc_MakeRotator_Roll_ImplicitCast_4, float CallFunc_MakeRotator_Roll_ImplicitCast_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalArchVFX_C", "UserConstructionScript");

	Params::ABP_PortalArchVFX_C_UserConstructionScript_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.CallFunc_AddComponent_ReturnValue_1 = CallFunc_AddComponent_ReturnValue_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.CallFunc_AddComponent_ReturnValue_2 = CallFunc_AddComponent_ReturnValue_2;
	Parms.CallFunc_AddComponent_ReturnValue_3 = CallFunc_AddComponent_ReturnValue_3;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;
	Parms.Temp_struct_Variable_5 = Temp_struct_Variable_5;
	Parms.CallFunc_AddComponent_ReturnValue_4 = CallFunc_AddComponent_ReturnValue_4;
	Parms.CallFunc_AddComponent_ReturnValue_5 = CallFunc_AddComponent_ReturnValue_5;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.Temp_real_Variable_2 = Temp_real_Variable_2;
	Parms.Temp_real_Variable_3 = Temp_real_Variable_3;
	Parms.Temp_real_Variable_4 = Temp_real_Variable_4;
	Parms.Temp_real_Variable_5 = Temp_real_Variable_5;
	Parms.Temp_real_Variable_6 = Temp_real_Variable_6;
	Parms.Temp_real_Variable_7 = Temp_real_Variable_7;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_struct_Variable_6 = Temp_struct_Variable_6;
	Parms.Temp_struct_Variable_7 = Temp_struct_Variable_7;
	Parms.Temp_struct_Variable_8 = Temp_struct_Variable_8;
	Parms.Temp_struct_Variable_9 = Temp_struct_Variable_9;
	Parms.Temp_struct_Variable_10 = Temp_struct_Variable_10;
	Parms.Temp_struct_Variable_11 = Temp_struct_Variable_11;
	Parms.Temp_struct_Variable_12 = Temp_struct_Variable_12;
	Parms.Temp_struct_Variable_13 = Temp_struct_Variable_13;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_real_Variable_8 = Temp_real_Variable_8;
	Parms.Temp_real_Variable_9 = Temp_real_Variable_9;
	Parms.Temp_real_Variable_10 = Temp_real_Variable_10;
	Parms.Temp_real_Variable_11 = Temp_real_Variable_11;
	Parms.Temp_real_Variable_12 = Temp_real_Variable_12;
	Parms.Temp_real_Variable_13 = Temp_real_Variable_13;
	Parms.Temp_real_Variable_14 = Temp_real_Variable_14;
	Parms.Temp_real_Variable_15 = Temp_real_Variable_15;
	Parms.Temp_struct_Variable_14 = Temp_struct_Variable_14;
	Parms.CallFunc_AddComponent_ReturnValue_6 = CallFunc_AddComponent_ReturnValue_6;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue = CallFunc_K2_GetComponentRotation_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.Temp_real_Variable_16 = Temp_real_Variable_16;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult = CallFunc_K2_SetWorldRotation_SweepHitResult;
	Parms.Temp_real_Variable_17 = Temp_real_Variable_17;
	Parms.Temp_real_Variable_18 = Temp_real_Variable_18;
	Parms.Temp_real_Variable_19 = Temp_real_Variable_19;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_MakeVector_ReturnValue_2 = CallFunc_MakeVector_ReturnValue_2;
	Parms.CallFunc_MakeVector_ReturnValue_3 = CallFunc_MakeVector_ReturnValue_3;
	Parms.CallFunc_MakeVector_ReturnValue_4 = CallFunc_MakeVector_ReturnValue_4;
	Parms.Temp_real_Variable_20 = Temp_real_Variable_20;
	Parms.Temp_real_Variable_21 = Temp_real_Variable_21;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue_1 = CallFunc_K2_GetComponentRotation_ReturnValue_1;
	Parms.CallFunc_K2_AddLocalOffset_SweepHitResult = CallFunc_K2_AddLocalOffset_SweepHitResult;
	Parms.CallFunc_BreakRotator_Roll_1 = CallFunc_BreakRotator_Roll_1;
	Parms.CallFunc_BreakRotator_Pitch_1 = CallFunc_BreakRotator_Pitch_1;
	Parms.CallFunc_BreakRotator_Yaw_1 = CallFunc_BreakRotator_Yaw_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.Temp_real_Variable_22 = Temp_real_Variable_22;
	Parms.CallFunc_MakeRotator_ReturnValue_1 = CallFunc_MakeRotator_ReturnValue_1;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult_1 = CallFunc_K2_SetWorldRotation_SweepHitResult_1;
	Parms.Temp_real_Variable_23 = Temp_real_Variable_23;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue_2 = CallFunc_K2_GetComponentRotation_ReturnValue_2;
	Parms.CallFunc_K2_AddLocalOffset_SweepHitResult_1 = CallFunc_K2_AddLocalOffset_SweepHitResult_1;
	Parms.CallFunc_BreakRotator_Roll_2 = CallFunc_BreakRotator_Roll_2;
	Parms.CallFunc_BreakRotator_Pitch_2 = CallFunc_BreakRotator_Pitch_2;
	Parms.CallFunc_BreakRotator_Yaw_2 = CallFunc_BreakRotator_Yaw_2;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_2 = CallFunc_Add_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_MakeRotator_ReturnValue_2 = CallFunc_MakeRotator_ReturnValue_2;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult_2 = CallFunc_K2_SetWorldRotation_SweepHitResult_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue_3 = CallFunc_K2_GetComponentRotation_ReturnValue_3;
	Parms.CallFunc_K2_AddLocalOffset_SweepHitResult_2 = CallFunc_K2_AddLocalOffset_SweepHitResult_2;
	Parms.CallFunc_BreakRotator_Roll_3 = CallFunc_BreakRotator_Roll_3;
	Parms.CallFunc_BreakRotator_Pitch_3 = CallFunc_BreakRotator_Pitch_3;
	Parms.CallFunc_BreakRotator_Yaw_3 = CallFunc_BreakRotator_Yaw_3;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_3 = CallFunc_Add_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_MakeRotator_ReturnValue_3 = CallFunc_MakeRotator_ReturnValue_3;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult_3 = CallFunc_K2_SetWorldRotation_SweepHitResult_3;
	Parms.CallFunc_MakeVector_ReturnValue_5 = CallFunc_MakeVector_ReturnValue_5;
	Parms.CallFunc_K2_AddLocalOffset_SweepHitResult_3 = CallFunc_K2_AddLocalOffset_SweepHitResult_3;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue_4 = CallFunc_K2_GetComponentRotation_ReturnValue_4;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue_5 = CallFunc_K2_GetComponentRotation_ReturnValue_5;
	Parms.CallFunc_BreakRotator_Roll_4 = CallFunc_BreakRotator_Roll_4;
	Parms.CallFunc_BreakRotator_Pitch_4 = CallFunc_BreakRotator_Pitch_4;
	Parms.CallFunc_BreakRotator_Yaw_4 = CallFunc_BreakRotator_Yaw_4;
	Parms.CallFunc_BreakRotator_Roll_5 = CallFunc_BreakRotator_Roll_5;
	Parms.CallFunc_BreakRotator_Pitch_5 = CallFunc_BreakRotator_Pitch_5;
	Parms.CallFunc_BreakRotator_Yaw_5 = CallFunc_BreakRotator_Yaw_5;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_4 = CallFunc_Add_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_5 = CallFunc_Add_DoubleDouble_ReturnValue_5;
	Parms.CallFunc_MakeRotator_ReturnValue_4 = CallFunc_MakeRotator_ReturnValue_4;
	Parms.CallFunc_MakeRotator_ReturnValue_5 = CallFunc_MakeRotator_ReturnValue_5;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult_4 = CallFunc_K2_SetWorldRotation_SweepHitResult_4;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult_5 = CallFunc_K2_SetWorldRotation_SweepHitResult_5;
	Parms.CallFunc_K2_AddLocalOffset_SweepHitResult_4 = CallFunc_K2_AddLocalOffset_SweepHitResult_4;
	Parms.CallFunc_K2_AddLocalOffset_SweepHitResult_5 = CallFunc_K2_AddLocalOffset_SweepHitResult_5;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_AddComponent_ReturnValue_7 = CallFunc_AddComponent_ReturnValue_7;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_MakeRotator_Roll_ImplicitCast = CallFunc_MakeRotator_Roll_ImplicitCast;
	Parms.CallFunc_SetBarnDoorLength_NewValue_ImplicitCast = CallFunc_SetBarnDoorLength_NewValue_ImplicitCast;
	Parms.CallFunc_SetBarnDoorLength_NewValue_ImplicitCast_1 = CallFunc_SetBarnDoorLength_NewValue_ImplicitCast_1;
	Parms.CallFunc_SetSourceWidth_NewValue_ImplicitCast = CallFunc_SetSourceWidth_NewValue_ImplicitCast;
	Parms.CallFunc_SetSourceWidth_NewValue_ImplicitCast_1 = CallFunc_SetSourceWidth_NewValue_ImplicitCast_1;
	Parms.CallFunc_SetSourceHeight_NewValue_ImplicitCast = CallFunc_SetSourceHeight_NewValue_ImplicitCast;
	Parms.CallFunc_SetSourceHeight_NewValue_ImplicitCast_1 = CallFunc_SetSourceHeight_NewValue_ImplicitCast_1;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast_1 = CallFunc_Add_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_MakeRotator_Roll_ImplicitCast_1 = CallFunc_MakeRotator_Roll_ImplicitCast_1;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast_2 = CallFunc_Add_DoubleDouble_A_ImplicitCast_2;
	Parms.CallFunc_MakeRotator_Roll_ImplicitCast_2 = CallFunc_MakeRotator_Roll_ImplicitCast_2;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast_3 = CallFunc_Add_DoubleDouble_A_ImplicitCast_3;
	Parms.CallFunc_MakeRotator_Roll_ImplicitCast_3 = CallFunc_MakeRotator_Roll_ImplicitCast_3;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast_4 = CallFunc_Add_DoubleDouble_A_ImplicitCast_4;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast_5 = CallFunc_Add_DoubleDouble_A_ImplicitCast_5;
	Parms.CallFunc_MakeRotator_Roll_ImplicitCast_4 = CallFunc_MakeRotator_Roll_ImplicitCast_4;
	Parms.CallFunc_MakeRotator_Roll_ImplicitCast_5 = CallFunc_MakeRotator_Roll_ImplicitCast_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PortalArchVFX.BP_PortalArchVFX_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_PortalArchVFX_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalArchVFX_C", "Timeline_0__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PortalArchVFX.BP_PortalArchVFX_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_PortalArchVFX_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalArchVFX_C", "Timeline_0__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PortalArchVFX.BP_PortalArchVFX_C.Timeline_0__PortalLoopStop__EventFunc
// (BlueprintEvent)
// Parameters:

void ABP_PortalArchVFX_C::Timeline_0__PortalLoopStop__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalArchVFX_C", "Timeline_0__PortalLoopStop__EventFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PortalArchVFX.BP_PortalArchVFX_C.Timeline_0__PortalLoopStart__EventFunc
// (BlueprintEvent)
// Parameters:

void ABP_PortalArchVFX_C::Timeline_0__PortalLoopStart__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalArchVFX_C", "Timeline_0__PortalLoopStart__EventFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PortalArchVFX.BP_PortalArchVFX_C.Timeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_PortalArchVFX_C::Timeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalArchVFX_C", "Timeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PortalArchVFX.BP_PortalArchVFX_C.Timeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_PortalArchVFX_C::Timeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalArchVFX_C", "Timeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PortalArchVFX.BP_PortalArchVFX_C.Set NPC Spawner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CreatureSpawnerBase_C*   Spawner                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PortalArchVFX_C::Set_NPC_Spawner(class ABP_CreatureSpawnerBase_C* Spawner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalArchVFX_C", "Set NPC Spawner");

	Params::ABP_PortalArchVFX_C_Set_NPC_Spawner_Params Parms{};

	Parms.Spawner = Spawner;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PortalArchVFX.BP_PortalArchVFX_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_PortalArchVFX_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalArchVFX_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PortalArchVFX.BP_PortalArchVFX_C.PlayOpenSequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PortalArchVFX_C::PlayOpenSequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalArchVFX_C", "PlayOpenSequence");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PortalArchVFX.BP_PortalArchVFX_C.ReverseOpenSequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PortalArchVFX_C::ReverseOpenSequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalArchVFX_C", "ReverseOpenSequence");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PortalArchVFX.BP_PortalArchVFX_C.UpdatePortalState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETemporalPortalState    PortalState                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PortalArchVFX_C::UpdatePortalState(enum class ETemporalPortalState PortalState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalArchVFX_C", "UpdatePortalState");

	Params::ABP_PortalArchVFX_C_UpdatePortalState_Params Parms{};

	Parms.PortalState = PortalState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PortalArchVFX.BP_PortalArchVFX_C.TestOpenPortal
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PortalArchVFX_C::TestOpenPortal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalArchVFX_C", "TestOpenPortal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PortalArchVFX.BP_PortalArchVFX_C.TestClosePortal
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PortalArchVFX_C::TestClosePortal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalArchVFX_C", "TestClosePortal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PortalArchVFX.BP_PortalArchVFX_C.TestChargePortal
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PortalArchVFX_C::TestChargePortal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalArchVFX_C", "TestChargePortal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PortalArchVFX.BP_PortalArchVFX_C.PlayChargeUpSequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PortalArchVFX_C::PlayChargeUpSequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalArchVFX_C", "PlayChargeUpSequence");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PortalArchVFX.BP_PortalArchVFX_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PortalArchVFX_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalArchVFX_C", "ReceiveEndPlay");

	Params::ABP_PortalArchVFX_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PortalArchVFX.BP_PortalArchVFX_C.PlayStandbyVFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PortalArchVFX_C::PlayStandbyVFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalArchVFX_C", "PlayStandbyVFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PortalArchVFX.BP_PortalArchVFX_C.ReverseStandbyVFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PortalArchVFX_C::ReverseStandbyVFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalArchVFX_C", "ReverseStandbyVFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PortalArchVFX.BP_PortalArchVFX_C.TestPortalOpenToStandby
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PortalArchVFX_C::TestPortalOpenToStandby()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalArchVFX_C", "TestPortalOpenToStandby");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PortalArchVFX.BP_PortalArchVFX_C.TestPortalStandbyToOpen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PortalArchVFX_C::TestPortalStandbyToOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalArchVFX_C", "TestPortalStandbyToOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PortalArchVFX.BP_PortalArchVFX_C.TestPortalStandbyToClose
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PortalArchVFX_C::TestPortalStandbyToClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalArchVFX_C", "TestPortalStandbyToClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PortalArchVFX.BP_PortalArchVFX_C.TestForceOpenPortal
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PortalArchVFX_C::TestForceOpenPortal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalArchVFX_C", "TestForceOpenPortal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PortalArchVFX.BP_PortalArchVFX_C.ExecuteUbergraph_BP_PortalArchVFX
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETemporalPortalState    K2Node_Event_PortalState                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureSpawnerBase_C*   K2Node_Event_Spawner                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnVFX_NiagaraSystemSpawned                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnVFX_NiagaraSystemSpawned_1                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnVFX_NiagaraSystemSpawned_2                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UNiagaraComponent*           CallFunc_SpawnVFX_NiagaraSystemSpawned_3                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnVFX_NiagaraSystemSpawned_4                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_9                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_10                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_11                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetPlaybackPosition_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_12                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Yaw_ImplicitCast                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_4                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PortalArchVFX_C::ExecuteUbergraph_BP_PortalArchVFX(int32 EntryPoint, enum class ETemporalPortalState K2Node_Event_PortalState, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class ABP_CreatureSpawnerBase_C* K2Node_Event_Spawner, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, class UNiagaraComponent* CallFunc_SpawnVFX_NiagaraSystemSpawned, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_IsServer_ReturnValue_2, bool CallFunc_IsServer_ReturnValue_3, bool CallFunc_IsServer_ReturnValue_4, bool CallFunc_IsServer_ReturnValue_5, enum class EEndPlayReason K2Node_Event_EndPlayReason, class UNiagaraComponent* CallFunc_SpawnVFX_NiagaraSystemSpawned_1, class UNiagaraComponent* CallFunc_SpawnVFX_NiagaraSystemSpawned_2, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, bool CallFunc_IsServer_ReturnValue_6, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, class UNiagaraComponent* CallFunc_SpawnVFX_NiagaraSystemSpawned_3, bool CallFunc_IsServer_ReturnValue_7, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, class UNiagaraComponent* CallFunc_SpawnVFX_NiagaraSystemSpawned_4, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsServer_ReturnValue_8, bool CallFunc_IsServer_ReturnValue_9, bool CallFunc_IsServer_ReturnValue_10, bool CallFunc_IsServer_ReturnValue_11, float CallFunc_GetPlaybackPosition_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_9, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsServer_ReturnValue_12, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue_10, bool CallFunc_IsValid_ReturnValue_11, float CallFunc_SetFloatParameter_Param_ImplicitCast, float CallFunc_SetFloatParameter_Param_ImplicitCast_1, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_MakeRotator_Yaw_ImplicitCast, float CallFunc_SetFloatParameter_Param_ImplicitCast_2, float CallFunc_SetFloatParameter_Param_ImplicitCast_3, float CallFunc_SetFloatParameter_Param_ImplicitCast_4, double CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalArchVFX_C", "ExecuteUbergraph_BP_PortalArchVFX");

	Params::ABP_PortalArchVFX_C_ExecuteUbergraph_BP_PortalArchVFX_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_PortalState = K2Node_Event_PortalState;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue = CallFunc_K2_GetComponentRotation_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.K2Node_Event_Spawner = K2Node_Event_Spawner;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue_1 = CallFunc_K2_GetComponentRotation_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = CallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_SpawnVFX_NiagaraSystemSpawned = CallFunc_SpawnVFX_NiagaraSystemSpawned;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.CallFunc_IsServer_ReturnValue_2 = CallFunc_IsServer_ReturnValue_2;
	Parms.CallFunc_IsServer_ReturnValue_3 = CallFunc_IsServer_ReturnValue_3;
	Parms.CallFunc_IsServer_ReturnValue_4 = CallFunc_IsServer_ReturnValue_4;
	Parms.CallFunc_IsServer_ReturnValue_5 = CallFunc_IsServer_ReturnValue_5;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_SpawnVFX_NiagaraSystemSpawned_1 = CallFunc_SpawnVFX_NiagaraSystemSpawned_1;
	Parms.CallFunc_SpawnVFX_NiagaraSystemSpawned_2 = CallFunc_SpawnVFX_NiagaraSystemSpawned_2;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_IsServer_ReturnValue_6 = CallFunc_IsServer_ReturnValue_6;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_SpawnVFX_NiagaraSystemSpawned_3 = CallFunc_SpawnVFX_NiagaraSystemSpawned_3;
	Parms.CallFunc_IsServer_ReturnValue_7 = CallFunc_IsServer_ReturnValue_7;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_SpawnVFX_NiagaraSystemSpawned_4 = CallFunc_SpawnVFX_NiagaraSystemSpawned_4;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_IsServer_ReturnValue_8 = CallFunc_IsServer_ReturnValue_8;
	Parms.CallFunc_IsServer_ReturnValue_9 = CallFunc_IsServer_ReturnValue_9;
	Parms.CallFunc_IsServer_ReturnValue_10 = CallFunc_IsServer_ReturnValue_10;
	Parms.CallFunc_IsServer_ReturnValue_11 = CallFunc_IsServer_ReturnValue_11;
	Parms.CallFunc_GetPlaybackPosition_ReturnValue = CallFunc_GetPlaybackPosition_ReturnValue;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.CallFunc_LinearColorLerp_ReturnValue = CallFunc_LinearColorLerp_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue_12 = CallFunc_IsServer_ReturnValue_12;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast = CallFunc_SetFloatParameter_Param_ImplicitCast;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_1 = CallFunc_SetFloatParameter_Param_ImplicitCast_1;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_MakeRotator_Yaw_ImplicitCast = CallFunc_MakeRotator_Yaw_ImplicitCast;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_2 = CallFunc_SetFloatParameter_Param_ImplicitCast_2;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_3 = CallFunc_SetFloatParameter_Param_ImplicitCast_3;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_4 = CallFunc_SetFloatParameter_Param_ImplicitCast_4;
	Parms.CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast = CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast = CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}



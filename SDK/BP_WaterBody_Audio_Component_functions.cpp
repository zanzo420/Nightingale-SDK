#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WaterBody_Audio_Component.BP_WaterBody_Audio_Component_C
// (None)

class UClass* UBP_WaterBody_Audio_Component_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WaterBody_Audio_Component_C");

	return Clss;
}


// BP_WaterBody_Audio_Component_C BP_WaterBody_Audio_Component.Default__BP_WaterBody_Audio_Component_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_WaterBody_Audio_Component_C* UBP_WaterBody_Audio_Component_C::GetDefaultObj()
{
	static class UBP_WaterBody_Audio_Component_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_WaterBody_Audio_Component_C*>(UBP_WaterBody_Audio_Component_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_WaterBody_Audio_Component.BP_WaterBody_Audio_Component_C.GetCachedAmbienceManager
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAmbienceManager*            AmbienceManager                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAmbienceManager*            CallFunc_GetAmbienceManager_ReturnValue                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_WaterBody_Audio_Component_C::GetCachedAmbienceManager(class UAmbienceManager** AmbienceManager, class UAmbienceManager* CallFunc_GetAmbienceManager_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WaterBody_Audio_Component_C", "GetCachedAmbienceManager");

	Params::UBP_WaterBody_Audio_Component_C_GetCachedAmbienceManager_Params Parms{};

	Parms.CallFunc_GetAmbienceManager_ReturnValue = CallFunc_GetAmbienceManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (AmbienceManager != nullptr)
		*AmbienceManager = Parms.AmbienceManager;

}


// Function BP_WaterBody_Audio_Component.BP_WaterBody_Audio_Component_C.UpdateWindSpeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAmbienceManager*            CallFunc_GetCachedAmbienceManager_AmbienceManager                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_WaterBody_Audio_Component_C::UpdateWindSpeed(class UAmbienceManager* CallFunc_GetCachedAmbienceManager_AmbienceManager)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WaterBody_Audio_Component_C", "UpdateWindSpeed");

	Params::UBP_WaterBody_Audio_Component_C_UpdateWindSpeed_Params Parms{};

	Parms.CallFunc_GetCachedAmbienceManager_AmbienceManager = CallFunc_GetCachedAmbienceManager_AmbienceManager;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WaterBody_Audio_Component.BP_WaterBody_Audio_Component_C.Trace for Occlusion
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkComponent*                AkComponent                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector>             OcclusionGrid                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               IsStickyEmitter                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector>             TraceLocations                                                   (Edit, BlueprintVisible)
// int32                              InvalidHitCount                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TraceHitCount                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TraceCount                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EObjectTypeQuery>TraceObjects                                                     (Edit, BlueprintVisible)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EObjectTypeQuery>K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_WaterBody_Audio_Component_C::Trace_for_Occlusion(class UAkComponent* AkComponent, TArray<struct FVector>& OcclusionGrid, bool IsStickyEmitter, const TArray<struct FVector>& TraceLocations, int32 InvalidHitCount, int32 TraceHitCount, int32 TraceCount, const TArray<enum class EObjectTypeQuery>& TraceObjects, bool CallFunc_IsValid_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WaterBody_Audio_Component_C", "Trace for Occlusion");

	Params::UBP_WaterBody_Audio_Component_C_Trace_for_Occlusion_Params Parms{};

	Parms.AkComponent = AkComponent;
	Parms.OcclusionGrid = OcclusionGrid;
	Parms.IsStickyEmitter = IsStickyEmitter;
	Parms.TraceLocations = TraceLocations;
	Parms.InvalidHitCount = InvalidHitCount;
	Parms.TraceHitCount = TraceHitCount;
	Parms.TraceCount = TraceCount;
	Parms.TraceObjects = TraceObjects;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WaterBody_Audio_Component.BP_WaterBody_Audio_Component_C.GetWaterBodyTypeVariables
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_WaterBodyAudioProperties TableRow                                                         (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// struct FS_WaterBodyAudioProperties CallFunc_GetDataTableRowFromName_OutRow                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_WaterBodyAudioProperties CallFunc_GetDataTableRowFromName_OutRow_1                        (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBiomeAudioSwitch_Success                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkSwitchValue*              CallFunc_GetBiomeAudioSwitch_Switch                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FS_WaterBodyAudioProperties CallFunc_GetDataTableRowFromName_OutRow_2                        (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_WaterBodyAudioProperties CallFunc_GetDataTableRowFromName_OutRow_3                        (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AWaterIslandShores*          K2Node_DynamicCast_AsWater_Island_Shores                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWaterBodyRiver*             K2Node_DynamicCast_AsWater_Body_River                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWaterBodyLake*              K2Node_DynamicCast_AsWater_Body_Lake                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWaterBodyOcean*             K2Node_DynamicCast_AsWater_Body_Ocean                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableSet_EmitterSpeed_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableSet_EmitterDifferenceOffset_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableSet_GridSpreadDist_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableSet_WildlifeOSMinRadius_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableSet_WildlifeOSMaxRadius_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_WaterBody_Audio_Component_C::GetWaterBodyTypeVariables(const struct FS_WaterBodyAudioProperties& TableRow, const struct FS_WaterBodyAudioProperties& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FS_WaterBodyAudioProperties& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, bool CallFunc_GetBiomeAudioSwitch_Success, class UAkSwitchValue* CallFunc_GetBiomeAudioSwitch_Switch, const struct FS_WaterBodyAudioProperties& CallFunc_GetDataTableRowFromName_OutRow_2, bool CallFunc_GetDataTableRowFromName_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FS_WaterBodyAudioProperties& CallFunc_GetDataTableRowFromName_OutRow_3, bool CallFunc_GetDataTableRowFromName_ReturnValue_3, class AActor* CallFunc_GetOwner_ReturnValue, class AWaterIslandShores* K2Node_DynamicCast_AsWater_Island_Shores, bool K2Node_DynamicCast_bSuccess, class AWaterBodyRiver* K2Node_DynamicCast_AsWater_Body_River, bool K2Node_DynamicCast_bSuccess_1, class AWaterBodyLake* K2Node_DynamicCast_AsWater_Body_Lake, bool K2Node_DynamicCast_bSuccess_2, class AWaterBodyOcean* K2Node_DynamicCast_AsWater_Body_Ocean, bool K2Node_DynamicCast_bSuccess_3, float K2Node_VariableSet_EmitterSpeed_ImplicitCast, float K2Node_VariableSet_EmitterDifferenceOffset_ImplicitCast, float K2Node_VariableSet_GridSpreadDist_ImplicitCast, float K2Node_VariableSet_WildlifeOSMinRadius_ImplicitCast, float K2Node_VariableSet_WildlifeOSMaxRadius_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WaterBody_Audio_Component_C", "GetWaterBodyTypeVariables");

	Params::UBP_WaterBody_Audio_Component_C_GetWaterBodyTypeVariables_Params Parms{};

	Parms.TableRow = TableRow;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_GetBiomeAudioSwitch_Success = CallFunc_GetBiomeAudioSwitch_Success;
	Parms.CallFunc_GetBiomeAudioSwitch_Switch = CallFunc_GetBiomeAudioSwitch_Switch;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_2 = CallFunc_GetDataTableRowFromName_OutRow_2;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_2 = CallFunc_GetDataTableRowFromName_ReturnValue_2;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_3 = CallFunc_GetDataTableRowFromName_OutRow_3;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_3 = CallFunc_GetDataTableRowFromName_ReturnValue_3;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsWater_Island_Shores = K2Node_DynamicCast_AsWater_Island_Shores;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsWater_Body_River = K2Node_DynamicCast_AsWater_Body_River;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsWater_Body_Lake = K2Node_DynamicCast_AsWater_Body_Lake;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsWater_Body_Ocean = K2Node_DynamicCast_AsWater_Body_Ocean;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_VariableSet_EmitterSpeed_ImplicitCast = K2Node_VariableSet_EmitterSpeed_ImplicitCast;
	Parms.K2Node_VariableSet_EmitterDifferenceOffset_ImplicitCast = K2Node_VariableSet_EmitterDifferenceOffset_ImplicitCast;
	Parms.K2Node_VariableSet_GridSpreadDist_ImplicitCast = K2Node_VariableSet_GridSpreadDist_ImplicitCast;
	Parms.K2Node_VariableSet_WildlifeOSMinRadius_ImplicitCast = K2Node_VariableSet_WildlifeOSMinRadius_ImplicitCast;
	Parms.K2Node_VariableSet_WildlifeOSMaxRadius_ImplicitCast = K2Node_VariableSet_WildlifeOSMaxRadius_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WaterBody_Audio_Component.BP_WaterBody_Audio_Component_C.SetBiomeOSDelayTimes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBiomeID                Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_10                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_11                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_12                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_13                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_14                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_15                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_16                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBiomeID                Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_17                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXWorldSettings*           CallFunc_GetWorldSettings_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_WaterBody_Audio_Component_C::SetBiomeOSDelayTimes(double Temp_real_Variable, double Temp_real_Variable_1, double Temp_real_Variable_2, double Temp_real_Variable_3, double Temp_real_Variable_4, double Temp_real_Variable_5, double Temp_real_Variable_6, double Temp_real_Variable_7, enum class EBiomeID Temp_byte_Variable, double Temp_real_Variable_8, double Temp_real_Variable_9, double Temp_real_Variable_10, double Temp_real_Variable_11, double Temp_real_Variable_12, double Temp_real_Variable_13, double Temp_real_Variable_14, double Temp_real_Variable_15, double Temp_real_Variable_16, enum class EBiomeID Temp_byte_Variable_1, double Temp_real_Variable_17, bool CallFunc_IsValid_ReturnValue, class ANWXWorldSettings* CallFunc_GetWorldSettings_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, double K2Node_Select_Default, double K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WaterBody_Audio_Component_C", "SetBiomeOSDelayTimes");

	Params::UBP_WaterBody_Audio_Component_C_SetBiomeOSDelayTimes_Params Parms{};

	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.Temp_real_Variable_2 = Temp_real_Variable_2;
	Parms.Temp_real_Variable_3 = Temp_real_Variable_3;
	Parms.Temp_real_Variable_4 = Temp_real_Variable_4;
	Parms.Temp_real_Variable_5 = Temp_real_Variable_5;
	Parms.Temp_real_Variable_6 = Temp_real_Variable_6;
	Parms.Temp_real_Variable_7 = Temp_real_Variable_7;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_real_Variable_8 = Temp_real_Variable_8;
	Parms.Temp_real_Variable_9 = Temp_real_Variable_9;
	Parms.Temp_real_Variable_10 = Temp_real_Variable_10;
	Parms.Temp_real_Variable_11 = Temp_real_Variable_11;
	Parms.Temp_real_Variable_12 = Temp_real_Variable_12;
	Parms.Temp_real_Variable_13 = Temp_real_Variable_13;
	Parms.Temp_real_Variable_14 = Temp_real_Variable_14;
	Parms.Temp_real_Variable_15 = Temp_real_Variable_15;
	Parms.Temp_real_Variable_16 = Temp_real_Variable_16;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_real_Variable_17 = Temp_real_Variable_17;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetWorldSettings_ReturnValue = CallFunc_GetWorldSettings_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WaterBody_Audio_Component.BP_WaterBody_Audio_Component_C.Update Precipitation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAmbienceManager*            CallFunc_GetCachedAmbienceManager_AmbienceManager                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_WaterBody_Audio_Component_C::Update_Precipitation(class UAmbienceManager* CallFunc_GetCachedAmbienceManager_AmbienceManager)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WaterBody_Audio_Component_C", "Update Precipitation");

	Params::UBP_WaterBody_Audio_Component_C_Update_Precipitation_Params Parms{};

	Parms.CallFunc_GetCachedAmbienceManager_AmbienceManager = CallFunc_GetCachedAmbienceManager_AmbienceManager;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WaterBody_Audio_Component.BP_WaterBody_Audio_Component_C.DrawDebugSpheres
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                ColorRS                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                ColorLS                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                ColorR                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                ColorL                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_WaterBody_Audio_Component_C::DrawDebugSpheres(const struct FLinearColor& ColorRS, const struct FLinearColor& ColorLS, const struct FLinearColor& ColorR, const struct FLinearColor& ColorL)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WaterBody_Audio_Component_C", "DrawDebugSpheres");

	Params::UBP_WaterBody_Audio_Component_C_DrawDebugSpheres_Params Parms{};

	Parms.ColorRS = ColorRS;
	Parms.ColorLS = ColorLS;
	Parms.ColorR = ColorR;
	Parms.ColorL = ColorL;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WaterBody_Audio_Component.BP_WaterBody_Audio_Component_C.Raycast for Materials
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<enum class EObjectTypeQuery>TraceObjects                                                     (Edit, BlueprintVisible)
// TArray<enum class EObjectTypeQuery>K2Node_MakeArray_Array                                           (ReferenceParm)

void UBP_WaterBody_Audio_Component_C::Raycast_for_Materials(const TArray<enum class EObjectTypeQuery>& TraceObjects, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WaterBody_Audio_Component_C", "Raycast for Materials");

	Params::UBP_WaterBody_Audio_Component_C_Raycast_for_Materials_Params Parms{};

	Parms.TraceObjects = TraceObjects;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WaterBody_Audio_Component.BP_WaterBody_Audio_Component_C.StartOcclusionScan
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_WaterBody_Audio_Component_C::StartOcclusionScan()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WaterBody_Audio_Component_C", "StartOcclusionScan");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WaterBody_Audio_Component.BP_WaterBody_Audio_Component_C.UpdateEmitterLocations
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_WaterBody_Audio_Component_C::UpdateEmitterLocations()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WaterBody_Audio_Component_C", "UpdateEmitterLocations");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WaterBody_Audio_Component.BP_WaterBody_Audio_Component_C.StartDistanceCheck
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_WaterBody_Audio_Component_C::StartDistanceCheck()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WaterBody_Audio_Component_C", "StartDistanceCheck");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WaterBody_Audio_Component.BP_WaterBody_Audio_Component_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_WaterBody_Audio_Component_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WaterBody_Audio_Component_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WaterBody_Audio_Component.BP_WaterBody_Audio_Component_C.ShowWaterAudioDebug
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Draw_Debug_Sphere                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_WaterBody_Audio_Component_C::ShowWaterAudioDebug(bool Draw_Debug_Sphere)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WaterBody_Audio_Component_C", "ShowWaterAudioDebug");

	Params::UBP_WaterBody_Audio_Component_C_ShowWaterAudioDebug_Params Parms{};

	Parms.Draw_Debug_Sphere = Draw_Debug_Sphere;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WaterBody_Audio_Component.BP_WaterBody_Audio_Component_C.ShowWaterAudioOcclusionDebug
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShowInfo                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_WaterBody_Audio_Component_C::ShowWaterAudioOcclusionDebug(bool ShowInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WaterBody_Audio_Component_C", "ShowWaterAudioOcclusionDebug");

	Params::UBP_WaterBody_Audio_Component_C_ShowWaterAudioOcclusionDebug_Params Parms{};

	Parms.ShowInfo = ShowInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WaterBody_Audio_Component.BP_WaterBody_Audio_Component_C.TriggerWildlifeOneShotLoopWrapper
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_WaterBody_Audio_Component_C::TriggerWildlifeOneShotLoopWrapper()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WaterBody_Audio_Component_C", "TriggerWildlifeOneShotLoopWrapper");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WaterBody_Audio_Component.BP_WaterBody_Audio_Component_C.SwitchOnEPhysicalSurfaceAndSetRTPCsWrapper
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  HitResult                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UAkComponent*                AkComponent                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_WaterBody_Audio_Component_C::SwitchOnEPhysicalSurfaceAndSetRTPCsWrapper(struct FHitResult& HitResult, class UAkComponent* AkComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WaterBody_Audio_Component_C", "SwitchOnEPhysicalSurfaceAndSetRTPCsWrapper");

	Params::UBP_WaterBody_Audio_Component_C_SwitchOnEPhysicalSurfaceAndSetRTPCsWrapper_Params Parms{};

	Parms.HitResult = HitResult;
	Parms.AkComponent = AkComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WaterBody_Audio_Component.BP_WaterBody_Audio_Component_C.ExecuteUbergraph_BP_WaterBody_Audio_Component
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCameraWorldLocation_Success                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetCameraWorldLocation_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector>             CallFunc_TrySortSplinePointsToQuadrants_OutForwardLeft           (ReferenceParm)
// TArray<struct FVector>             CallFunc_TrySortSplinePointsToQuadrants_OutForwardRight          (ReferenceParm)
// TArray<struct FVector>             CallFunc_TrySortSplinePointsToQuadrants_OutBackLeft              (ReferenceParm)
// TArray<struct FVector>             CallFunc_TrySortSplinePointsToQuadrants_OutBackRight             (ReferenceParm)
// bool                               CallFunc_TrySortSplinePointsToQuadrants_OutWorldPosIsInWater     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TrySortSplinePointsToQuadrants_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USplineComponent*            CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Draw_Debug_Sphere                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_ShowInfo                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAVFXEnvironmentSubsystem*   CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_HitResult                                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UAkComponent*                K2Node_Event_AkComponent                                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector>             CallFunc_TrySortCoastlinePointsToQuadrants_OutForwardLeft        (ReferenceParm)
// TArray<struct FVector>             CallFunc_TrySortCoastlinePointsToQuadrants_OutForwardRight       (ReferenceParm)
// TArray<struct FVector>             CallFunc_TrySortCoastlinePointsToQuadrants_OutBackLeft           (ReferenceParm)
// TArray<struct FVector>             CallFunc_TrySortCoastlinePointsToQuadrants_OutBackRight          (ReferenceParm)
// bool                               CallFunc_TrySortCoastlinePointsToQuadrants_IsPosInWater          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TrySortCoastlinePointsToQuadrants_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
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
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_SurfaceTypeToString_AsString                            (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_AudioMaterialContexts    CallFunc_GetDataTableRowFromName_OutRow                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBiomeAudioSwitch_Success                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkSwitchValue*              CallFunc_GetBiomeAudioSwitch_Switch                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAmbienceManager*            CallFunc_GetCachedAmbienceManager_AmbienceManager                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_2                       (NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloat_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloat_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_3                       (NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_4                       (NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_5                       (NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_6                       (NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_7                       (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CheckQuadDistance_MergeDistance_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CheckQuadDistance_MergeDistance_ImplicitCast_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CheckQuadDistance_MergeDistance_ImplicitCast_2          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CheckQuadDistance_MergeDistance_ImplicitCast_3          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast_1    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast_2    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast_3    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast_4    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast_5    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast_6    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast_7    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_WaterBody_Audio_Component_C::ExecuteUbergraph_BP_WaterBody_Audio_Component(int32 EntryPoint, double CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetCameraWorldLocation_Success, const struct FVector& CallFunc_GetCameraWorldLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TArray<struct FVector>& CallFunc_TrySortSplinePointsToQuadrants_OutForwardLeft, TArray<struct FVector>& CallFunc_TrySortSplinePointsToQuadrants_OutForwardRight, TArray<struct FVector>& CallFunc_TrySortSplinePointsToQuadrants_OutBackLeft, TArray<struct FVector>& CallFunc_TrySortSplinePointsToQuadrants_OutBackRight, bool CallFunc_TrySortSplinePointsToQuadrants_OutWorldPosIsInWater, bool CallFunc_TrySortSplinePointsToQuadrants_ReturnValue, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class USplineComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool K2Node_CustomEvent_Draw_Debug_Sphere, bool K2Node_CustomEvent_ShowInfo, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, double CallFunc_RandomFloatInRange_ReturnValue_1, class UAVFXEnvironmentSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, const struct FHitResult& K2Node_Event_HitResult, class UAkComponent* K2Node_Event_AkComponent, TArray<struct FVector>& CallFunc_TrySortCoastlinePointsToQuadrants_OutForwardLeft, TArray<struct FVector>& CallFunc_TrySortCoastlinePointsToQuadrants_OutForwardRight, TArray<struct FVector>& CallFunc_TrySortCoastlinePointsToQuadrants_OutBackLeft, TArray<struct FVector>& CallFunc_TrySortCoastlinePointsToQuadrants_OutBackRight, bool CallFunc_TrySortCoastlinePointsToQuadrants_IsPosInWater, bool CallFunc_TrySortCoastlinePointsToQuadrants_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_IsValid_ReturnValue_6, const class FString& CallFunc_SurfaceTypeToString_AsString, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FS_AudioMaterialContexts& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_GetBiomeAudioSwitch_Success, class UAkSwitchValue* CallFunc_GetBiomeAudioSwitch_Switch, class UAmbienceManager* CallFunc_GetCachedAmbienceManager_AmbienceManager, bool CallFunc_NotEqual_ByteByte_ReturnValue, double CallFunc_RandomFloat_ReturnValue, double CallFunc_RandomFloat_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_2, double CallFunc_RandomFloat_ReturnValue_2, double CallFunc_RandomFloat_ReturnValue_3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_4, double CallFunc_RandomFloatInRange_ReturnValue_2, double CallFunc_RandomFloatInRange_ReturnValue_3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_5, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_6, double CallFunc_RandomFloatInRange_ReturnValue_4, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_7, float CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast, float CallFunc_CheckQuadDistance_MergeDistance_ImplicitCast, float CallFunc_CheckQuadDistance_MergeDistance_ImplicitCast_1, float CallFunc_CheckQuadDistance_MergeDistance_ImplicitCast_2, float CallFunc_CheckQuadDistance_MergeDistance_ImplicitCast_3, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast, float CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast_1, float CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast_2, float CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast_3, float CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast_4, float CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast_5, float CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast_6, float CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WaterBody_Audio_Component_C", "ExecuteUbergraph_BP_WaterBody_Audio_Component");

	Params::UBP_WaterBody_Audio_Component_C_ExecuteUbergraph_BP_WaterBody_Audio_Component_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCameraWorldLocation_Success = CallFunc_GetCameraWorldLocation_Success;
	Parms.CallFunc_GetCameraWorldLocation_ReturnValue = CallFunc_GetCameraWorldLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_TrySortSplinePointsToQuadrants_OutForwardLeft = CallFunc_TrySortSplinePointsToQuadrants_OutForwardLeft;
	Parms.CallFunc_TrySortSplinePointsToQuadrants_OutForwardRight = CallFunc_TrySortSplinePointsToQuadrants_OutForwardRight;
	Parms.CallFunc_TrySortSplinePointsToQuadrants_OutBackLeft = CallFunc_TrySortSplinePointsToQuadrants_OutBackLeft;
	Parms.CallFunc_TrySortSplinePointsToQuadrants_OutBackRight = CallFunc_TrySortSplinePointsToQuadrants_OutBackRight;
	Parms.CallFunc_TrySortSplinePointsToQuadrants_OutWorldPosIsInWater = CallFunc_TrySortSplinePointsToQuadrants_OutWorldPosIsInWater;
	Parms.CallFunc_TrySortSplinePointsToQuadrants_ReturnValue = CallFunc_TrySortSplinePointsToQuadrants_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_CustomEvent_Draw_Debug_Sphere = K2Node_CustomEvent_Draw_Debug_Sphere;
	Parms.K2Node_CustomEvent_ShowInfo = K2Node_CustomEvent_ShowInfo;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.K2Node_Event_HitResult = K2Node_Event_HitResult;
	Parms.K2Node_Event_AkComponent = K2Node_Event_AkComponent;
	Parms.CallFunc_TrySortCoastlinePointsToQuadrants_OutForwardLeft = CallFunc_TrySortCoastlinePointsToQuadrants_OutForwardLeft;
	Parms.CallFunc_TrySortCoastlinePointsToQuadrants_OutForwardRight = CallFunc_TrySortCoastlinePointsToQuadrants_OutForwardRight;
	Parms.CallFunc_TrySortCoastlinePointsToQuadrants_OutBackLeft = CallFunc_TrySortCoastlinePointsToQuadrants_OutBackLeft;
	Parms.CallFunc_TrySortCoastlinePointsToQuadrants_OutBackRight = CallFunc_TrySortCoastlinePointsToQuadrants_OutBackRight;
	Parms.CallFunc_TrySortCoastlinePointsToQuadrants_IsPosInWater = CallFunc_TrySortCoastlinePointsToQuadrants_IsPosInWater;
	Parms.CallFunc_TrySortCoastlinePointsToQuadrants_ReturnValue = CallFunc_TrySortCoastlinePointsToQuadrants_ReturnValue;
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
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_SurfaceTypeToString_AsString = CallFunc_SurfaceTypeToString_AsString;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetBiomeAudioSwitch_Success = CallFunc_GetBiomeAudioSwitch_Success;
	Parms.CallFunc_GetBiomeAudioSwitch_Switch = CallFunc_GetBiomeAudioSwitch_Switch;
	Parms.CallFunc_GetCachedAmbienceManager_AmbienceManager = CallFunc_GetCachedAmbienceManager_AmbienceManager;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_RandomFloat_ReturnValue = CallFunc_RandomFloat_ReturnValue;
	Parms.CallFunc_RandomFloat_ReturnValue_1 = CallFunc_RandomFloat_ReturnValue_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_2 = CallFunc_K2_SetTimerDelegate_ReturnValue_2;
	Parms.CallFunc_RandomFloat_ReturnValue_2 = CallFunc_RandomFloat_ReturnValue_2;
	Parms.CallFunc_RandomFloat_ReturnValue_3 = CallFunc_RandomFloat_ReturnValue_3;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_3 = CallFunc_K2_SetTimerDelegate_ReturnValue_3;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_4 = CallFunc_K2_SetTimerDelegate_ReturnValue_4;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_2 = CallFunc_RandomFloatInRange_ReturnValue_2;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_3 = CallFunc_RandomFloatInRange_ReturnValue_3;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_5 = CallFunc_K2_SetTimerDelegate_ReturnValue_5;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_6 = CallFunc_K2_SetTimerDelegate_ReturnValue_6;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_4 = CallFunc_RandomFloatInRange_ReturnValue_4;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_7 = CallFunc_K2_SetTimerDelegate_ReturnValue_7;
	Parms.CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast = CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast;
	Parms.CallFunc_CheckQuadDistance_MergeDistance_ImplicitCast = CallFunc_CheckQuadDistance_MergeDistance_ImplicitCast;
	Parms.CallFunc_CheckQuadDistance_MergeDistance_ImplicitCast_1 = CallFunc_CheckQuadDistance_MergeDistance_ImplicitCast_1;
	Parms.CallFunc_CheckQuadDistance_MergeDistance_ImplicitCast_2 = CallFunc_CheckQuadDistance_MergeDistance_ImplicitCast_2;
	Parms.CallFunc_CheckQuadDistance_MergeDistance_ImplicitCast_3 = CallFunc_CheckQuadDistance_MergeDistance_ImplicitCast_3;
	Parms.CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast = CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Delay_Duration_ImplicitCast = CallFunc_Delay_Duration_ImplicitCast;
	Parms.CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast_1 = CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast_1;
	Parms.CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast_2 = CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast_2;
	Parms.CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast_3 = CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast_3;
	Parms.CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast_4 = CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast_4;
	Parms.CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast_5 = CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast_5;
	Parms.CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast_6 = CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast_6;
	Parms.CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast_7 = CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast_7;

	UObject::ProcessEvent(Func, &Parms);

}

}



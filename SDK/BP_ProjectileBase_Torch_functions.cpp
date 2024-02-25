#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ProjectileBase_Torch.BP_ProjectileBase_Torch_C
// (Actor)

class UClass* ABP_ProjectileBase_Torch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ProjectileBase_Torch_C");

	return Clss;
}


// BP_ProjectileBase_Torch_C BP_ProjectileBase_Torch.Default__BP_ProjectileBase_Torch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ProjectileBase_Torch_C* ABP_ProjectileBase_Torch_C::GetDefaultObj()
{
	static class ABP_ProjectileBase_Torch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ProjectileBase_Torch_C*>(ABP_ProjectileBase_Torch_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ProjectileBase_Torch.BP_ProjectileBase_Torch_C.SetupLightIntensity
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCurveFloat*                 IntensityCurve                                                   (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              NightIntensity                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DayIntensity                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      ManagerActor                                                     (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class UTimeOfDaySubsystem*         CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTimeOfDaySubsystem*         CallFunc_GetWorldSubsystem_ReturnValue_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetTimeOfDayManagerFromSubsystem_ReturnValue            (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_TimeOfDayManager_C*      K2Node_DynamicCast_AsBP_Time_Of_Day_Manager                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetNormalizedVisualTime_VisualTime                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ConvertNormalizedTimeto24Hr_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_A_ImplicitCast                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_B_ImplicitCast                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ConvertNormalizedTimeto24Hr_NormalizedTime_ImplicitCast (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetIntensity_NewIntensity_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileBase_Torch_C::SetupLightIntensity(class UCurveFloat* IntensityCurve, float NightIntensity, float DayIntensity, class AActor* ManagerActor, class UTimeOfDaySubsystem* CallFunc_GetWorldSubsystem_ReturnValue, class UTimeOfDaySubsystem* CallFunc_GetWorldSubsystem_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetTimeOfDayManagerFromSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ABP_TimeOfDayManager_C* K2Node_DynamicCast_AsBP_Time_Of_Day_Manager, bool K2Node_DynamicCast_bSuccess, double CallFunc_GetNormalizedVisualTime_VisualTime, bool CallFunc_IsValid_ReturnValue_2, float CallFunc_ConvertNormalizedTimeto24Hr_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, double CallFunc_Lerp_ReturnValue, double CallFunc_Lerp_A_ImplicitCast, double CallFunc_Lerp_B_ImplicitCast, float CallFunc_ConvertNormalizedTimeto24Hr_NormalizedTime_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast, float CallFunc_SetIntensity_NewIntensity_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_Torch_C", "SetupLightIntensity");

	Params::ABP_ProjectileBase_Torch_C_SetupLightIntensity_Params Parms{};

	Parms.IntensityCurve = IntensityCurve;
	Parms.NightIntensity = NightIntensity;
	Parms.DayIntensity = DayIntensity;
	Parms.ManagerActor = ManagerActor;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_1 = CallFunc_GetWorldSubsystem_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetTimeOfDayManagerFromSubsystem_ReturnValue = CallFunc_GetTimeOfDayManagerFromSubsystem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Time_Of_Day_Manager = K2Node_DynamicCast_AsBP_Time_Of_Day_Manager;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetNormalizedVisualTime_VisualTime = CallFunc_GetNormalizedVisualTime_VisualTime;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_ConvertNormalizedTimeto24Hr_ReturnValue = CallFunc_ConvertNormalizedTimeto24Hr_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Lerp_A_ImplicitCast = CallFunc_Lerp_A_ImplicitCast;
	Parms.CallFunc_Lerp_B_ImplicitCast = CallFunc_Lerp_B_ImplicitCast;
	Parms.CallFunc_ConvertNormalizedTimeto24Hr_NormalizedTime_ImplicitCast = CallFunc_ConvertNormalizedTimeto24Hr_NormalizedTime_ImplicitCast;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast = CallFunc_Lerp_Alpha_ImplicitCast;
	Parms.CallFunc_SetIntensity_NewIntensity_ImplicitCast = CallFunc_SetIntensity_NewIntensity_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectileBase_Torch.BP_ProjectileBase_Torch_C.TorchSpin__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_ProjectileBase_Torch_C::TorchSpin__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_Torch_C", "TorchSpin__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ProjectileBase_Torch.BP_ProjectileBase_Torch_C.TorchSpin__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_ProjectileBase_Torch_C::TorchSpin__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_Torch_C", "TorchSpin__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ProjectileBase_Torch.BP_ProjectileBase_Torch_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ProjectileBase_Torch_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_Torch_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ProjectileBase_Torch.BP_ProjectileBase_Torch_C.SetupClientTorch
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ProjectileBase_Torch_C::SetupClientTorch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_Torch_C", "SetupClientTorch");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ProjectileBase_Torch.BP_ProjectileBase_Torch_C.ExecuteUbergraph_BP_ProjectileBase_Torch
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_ProjectileBase_Torch_C::ExecuteUbergraph_BP_ProjectileBase_Torch(int32 EntryPoint, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_Torch_C", "ExecuteUbergraph_BP_ProjectileBase_Torch");

	Params::ABP_ProjectileBase_Torch_C_ExecuteUbergraph_BP_ProjectileBase_Torch_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}

}



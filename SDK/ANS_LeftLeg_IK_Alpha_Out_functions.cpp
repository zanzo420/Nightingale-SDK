#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ANS_LeftLeg_IK_Alpha_Out.ANS_LeftLeg_IK_Alpha_Out_C
// (None)

class UClass* UANS_LeftLeg_IK_Alpha_Out_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANS_LeftLeg_IK_Alpha_Out_C");

	return Clss;
}


// ANS_LeftLeg_IK_Alpha_Out_C ANS_LeftLeg_IK_Alpha_Out.Default__ANS_LeftLeg_IK_Alpha_Out_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANS_LeftLeg_IK_Alpha_Out_C* UANS_LeftLeg_IK_Alpha_Out_C::GetDefaultObj()
{
	static class UANS_LeftLeg_IK_Alpha_Out_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANS_LeftLeg_IK_Alpha_Out_C*>(UANS_LeftLeg_IK_Alpha_Out_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANS_LeftLeg_IK_Alpha_Out.ANS_LeftLeg_IK_Alpha_Out_C.Received_NotifyTick
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              FrameDeltaTime                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnimNotifyEventReference   EventReference                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UABP_GNM_Template_C*         K2Node_DynamicCast_AsABP_GNM_Template                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UANS_LeftLeg_IK_Alpha_Out_C::Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime, struct FAnimNotifyEventReference& EventReference, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UABP_GNM_Template_C* K2Node_DynamicCast_AsABP_GNM_Template, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANS_LeftLeg_IK_Alpha_Out_C", "Received_NotifyTick");

	Params::UANS_LeftLeg_IK_Alpha_Out_C_Received_NotifyTick_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.FrameDeltaTime = FrameDeltaTime;
	Parms.EventReference = EventReference;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsABP_GNM_Template = K2Node_DynamicCast_AsABP_GNM_Template;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}



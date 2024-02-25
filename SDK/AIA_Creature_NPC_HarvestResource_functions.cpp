#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIA_Creature_NPC_HarvestResource.AIA_Creature_NPC_HarvestResource_C
// (None)

class UClass* UAIA_Creature_NPC_HarvestResource_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIA_Creature_NPC_HarvestResource_C");

	return Clss;
}


// AIA_Creature_NPC_HarvestResource_C AIA_Creature_NPC_HarvestResource.Default__AIA_Creature_NPC_HarvestResource_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIA_Creature_NPC_HarvestResource_C* UAIA_Creature_NPC_HarvestResource_C::GetDefaultObj()
{
	static class UAIA_Creature_NPC_HarvestResource_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIA_Creature_NPC_HarvestResource_C*>(UAIA_Creature_NPC_HarvestResource_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIA_Creature_NPC_HarvestResource.AIA_Creature_NPC_HarvestResource_C.CheckOwnerRequirements
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              LMaxDistance                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     LSearchLocation                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_HarvestComponent_C*      LHarvestComponent                                                (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureSpawner_NPCGroup_C*LNPCGroup                                                        (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetCompanionSearchParameters_SearchLocation             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCompanionSearchParameters_SearchRadius               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Get_Eligible_Resource_Nodes_Success                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Get_Eligible_Resource_Nodes_NearestLocation             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ResourceNodeIIMBase_C*   CallFunc_Get_Eligible_Resource_Nodes_ResourceNode                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Get_Eligible_Resource_Nodes_NearestIndex                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_HarvestComponent_C*      CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckOwnerRequirements_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCompanionSearchParameters_DesiredSearchRadius_ImplicitCast(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Get_Eligible_Resource_Nodes_MaxDistance_ImplicitCast    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAIA_Creature_NPC_HarvestResource_C::CheckOwnerRequirements(float LMaxDistance, const struct FVector& LSearchLocation, class UBP_HarvestComponent_C* LHarvestComponent, class ABP_CreatureSpawner_NPCGroup_C* LNPCGroup, const struct FVector& CallFunc_GetCompanionSearchParameters_SearchLocation, float CallFunc_GetCompanionSearchParameters_SearchRadius, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Get_Eligible_Resource_Nodes_Success, const struct FVector& CallFunc_Get_Eligible_Resource_Nodes_NearestLocation, class ABP_ResourceNodeIIMBase_C* CallFunc_Get_Eligible_Resource_Nodes_ResourceNode, int32 CallFunc_Get_Eligible_Resource_Nodes_NearestIndex, class UBP_HarvestComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_CheckOwnerRequirements_ReturnValue, float CallFunc_GetCompanionSearchParameters_DesiredSearchRadius_ImplicitCast, double CallFunc_Get_Eligible_Resource_Nodes_MaxDistance_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_NPC_HarvestResource_C", "CheckOwnerRequirements");

	Params::UAIA_Creature_NPC_HarvestResource_C_CheckOwnerRequirements_Params Parms{};

	Parms.LMaxDistance = LMaxDistance;
	Parms.LSearchLocation = LSearchLocation;
	Parms.LHarvestComponent = LHarvestComponent;
	Parms.LNPCGroup = LNPCGroup;
	Parms.CallFunc_GetCompanionSearchParameters_SearchLocation = CallFunc_GetCompanionSearchParameters_SearchLocation;
	Parms.CallFunc_GetCompanionSearchParameters_SearchRadius = CallFunc_GetCompanionSearchParameters_SearchRadius;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Get_Eligible_Resource_Nodes_Success = CallFunc_Get_Eligible_Resource_Nodes_Success;
	Parms.CallFunc_Get_Eligible_Resource_Nodes_NearestLocation = CallFunc_Get_Eligible_Resource_Nodes_NearestLocation;
	Parms.CallFunc_Get_Eligible_Resource_Nodes_ResourceNode = CallFunc_Get_Eligible_Resource_Nodes_ResourceNode;
	Parms.CallFunc_Get_Eligible_Resource_Nodes_NearestIndex = CallFunc_Get_Eligible_Resource_Nodes_NearestIndex;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_CheckOwnerRequirements_ReturnValue = CallFunc_CheckOwnerRequirements_ReturnValue;
	Parms.CallFunc_GetCompanionSearchParameters_DesiredSearchRadius_ImplicitCast = CallFunc_GetCompanionSearchParameters_DesiredSearchRadius_ImplicitCast;
	Parms.CallFunc_Get_Eligible_Resource_Nodes_MaxDistance_ImplicitCast = CallFunc_Get_Eligible_Resource_Nodes_MaxDistance_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIA_Creature_NPC_HarvestResource.AIA_Creature_NPC_HarvestResource_C.CheckStaticTargetRequirements
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAIA_Creature_NPC_HarvestResource_C::CheckStaticTargetRequirements(class AActor* Target, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_NPC_HarvestResource_C", "CheckStaticTargetRequirements");

	Params::UAIA_Creature_NPC_HarvestResource_C_CheckStaticTargetRequirements_Params Parms{};

	Parms.Target = Target;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIA_Creature_NPC_HarvestResource.AIA_Creature_NPC_HarvestResource_C.GetNormalizedScore
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UAIA_Creature_NPC_HarvestResource_C::GetNormalizedScore(class AActor* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_NPC_HarvestResource_C", "GetNormalizedScore");

	Params::UAIA_Creature_NPC_HarvestResource_C_GetNormalizedScore_Params Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}



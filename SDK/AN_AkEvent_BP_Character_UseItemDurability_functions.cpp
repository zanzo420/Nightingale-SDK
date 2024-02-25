#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AN_AkEvent_BP_Character_UseItemDurability.AN_AkEvent_BP_Character_UseItemDurability_C
// (None)

class UClass* UAN_AkEvent_BP_Character_UseItemDurability_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AN_AkEvent_BP_Character_UseItemDurability_C");

	return Clss;
}


// AN_AkEvent_BP_Character_UseItemDurability_C AN_AkEvent_BP_Character_UseItemDurability.Default__AN_AkEvent_BP_Character_UseItemDurability_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAN_AkEvent_BP_Character_UseItemDurability_C* UAN_AkEvent_BP_Character_UseItemDurability_C::GetDefaultObj()
{
	static class UAN_AkEvent_BP_Character_UseItemDurability_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAN_AkEvent_BP_Character_UseItemDurability_C*>(UAN_AkEvent_BP_Character_UseItemDurability_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AN_AkEvent_BP_Character_UseItemDurability.AN_AkEvent_BP_Character_UseItemDurability_C.ApplyAdditionalRTPCs
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComponent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                AkComponent                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             Durability                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FItemInstanceDurabilityData CallFunc_TryGetItemDurability_Durability                         (NoDestructor)
// enum class EGetResult              CallFunc_TryGetItemDurability_Branches                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ILoadoutReadInterface>K2Node_DynamicCast_AsLoadout_Read_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             CallFunc_GetEquippedItem_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Durability_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRTPCValue_Value_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAN_AkEvent_BP_Character_UseItemDurability_C::ApplyAdditionalRTPCs(class USkeletalMeshComponent* MeshComponent, class UAkComponent* AkComponent, double Durability, class AEquippableItem* Temp_object_Variable, class AActor* CallFunc_GetOwner_ReturnValue, const struct FItemInstanceDurabilityData& CallFunc_TryGetItemDurability_Durability, enum class EGetResult CallFunc_TryGetItemDurability_Branches, TScriptInterface<class ILoadoutReadInterface> K2Node_DynamicCast_AsLoadout_Read_Interface, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, class AEquippableItem* CallFunc_GetEquippedItem_ReturnValue, double K2Node_VariableSet_Durability_ImplicitCast, float CallFunc_SetRTPCValue_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AN_AkEvent_BP_Character_UseItemDurability_C", "ApplyAdditionalRTPCs");

	Params::UAN_AkEvent_BP_Character_UseItemDurability_C_ApplyAdditionalRTPCs_Params Parms{};

	Parms.MeshComponent = MeshComponent;
	Parms.AkComponent = AkComponent;
	Parms.Durability = Durability;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_TryGetItemDurability_Durability = CallFunc_TryGetItemDurability_Durability;
	Parms.CallFunc_TryGetItemDurability_Branches = CallFunc_TryGetItemDurability_Branches;
	Parms.K2Node_DynamicCast_AsLoadout_Read_Interface = K2Node_DynamicCast_AsLoadout_Read_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetEquippedItem_ReturnValue = CallFunc_GetEquippedItem_ReturnValue;
	Parms.K2Node_VariableSet_Durability_ImplicitCast = K2Node_VariableSet_Durability_ImplicitCast;
	Parms.CallFunc_SetRTPCValue_Value_ImplicitCast = CallFunc_SetRTPCValue_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_InteractionObject_EnterCraftingStation.BP_InteractionObject_EnterCraftingStation_C
// (None)

class UClass* UBP_InteractionObject_EnterCraftingStation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_InteractionObject_EnterCraftingStation_C");

	return Clss;
}


// BP_InteractionObject_EnterCraftingStation_C BP_InteractionObject_EnterCraftingStation.Default__BP_InteractionObject_EnterCraftingStation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_InteractionObject_EnterCraftingStation_C* UBP_InteractionObject_EnterCraftingStation_C::GetDefaultObj()
{
	static class UBP_InteractionObject_EnterCraftingStation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_InteractionObject_EnterCraftingStation_C*>(UBP_InteractionObject_EnterCraftingStation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_InteractionObject_EnterCraftingStation.BP_InteractionObject_EnterCraftingStation_C.ExecuteInteraction
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UStructureInteraction_PostConstructionInteraction_DataAsset*Data                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityPayloadHandlePayload                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              StartingParseIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewParsingIndex                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_MakeStruct_GameplayEventData                              (None)
// int32                              CallFunc_SendGameplayEventToActor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_InteractionObject_EnterCraftingStation_C::ExecuteInteraction(class UObject* Structure, class APawn* Pawn, class UStructureInteraction_PostConstructionInteraction_DataAsset* Data, const struct FGameplayAbilityPayloadHandle& Payload, int32 StartingParseIndex, bool* Success, int32* NewParsingIndex, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, int32 CallFunc_SendGameplayEventToActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InteractionObject_EnterCraftingStation_C", "ExecuteInteraction");

	Params::UBP_InteractionObject_EnterCraftingStation_C_ExecuteInteraction_Params Parms{};

	Parms.Structure = Structure;
	Parms.Pawn = Pawn;
	Parms.Data = Data;
	Parms.Payload = Payload;
	Parms.StartingParseIndex = StartingParseIndex;
	Parms.K2Node_MakeStruct_GameplayEventData = K2Node_MakeStruct_GameplayEventData;
	Parms.CallFunc_SendGameplayEventToActor_ReturnValue = CallFunc_SendGameplayEventToActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (NewParsingIndex != nullptr)
		*NewParsingIndex = Parms.NewParsingIndex;

}

}



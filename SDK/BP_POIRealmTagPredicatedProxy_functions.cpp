#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_POIRealmTagPredicatedProxy.BP_POIRealmTagPredicatedProxy_C
// (Actor)

class UClass* ABP_POIRealmTagPredicatedProxy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_POIRealmTagPredicatedProxy_C");

	return Clss;
}


// BP_POIRealmTagPredicatedProxy_C BP_POIRealmTagPredicatedProxy.Default__BP_POIRealmTagPredicatedProxy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_POIRealmTagPredicatedProxy_C* ABP_POIRealmTagPredicatedProxy_C::GetDefaultObj()
{
	static class ABP_POIRealmTagPredicatedProxy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_POIRealmTagPredicatedProxy_C*>(ABP_POIRealmTagPredicatedProxy_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_POIRealmTagPredicatedProxy.BP_POIRealmTagPredicatedProxy_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPOIStreamingLevelDefinitionCallFunc_GetStreamingLevelDefinitionFromProxy_ReturnValue        (None)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_BreakSoftObjectPath_PathString                          (ZeroConstructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_PathPart                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_FilenamePart                                      (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_ExtensionPart                                     (ZeroConstructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void ABP_POIRealmTagPredicatedProxy_C::UserConstructionScript(const struct FPOIStreamingLevelDefinition& CallFunc_GetStreamingLevelDefinitionFromProxy_ReturnValue, int32 CallFunc_Max_ReturnValue, const class FString& CallFunc_BreakSoftObjectPath_PathString, double CallFunc_Conv_IntToDouble_ReturnValue, const class FString& CallFunc_Split_PathPart, const class FString& CallFunc_Split_FilenamePart, const class FString& CallFunc_Split_ExtensionPart, const struct FVector& CallFunc_MakeVector_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_POIRealmTagPredicatedProxy_C", "UserConstructionScript");

	Params::ABP_POIRealmTagPredicatedProxy_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_GetStreamingLevelDefinitionFromProxy_ReturnValue = CallFunc_GetStreamingLevelDefinitionFromProxy_ReturnValue;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_BreakSoftObjectPath_PathString = CallFunc_BreakSoftObjectPath_PathString;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Split_PathPart = CallFunc_Split_PathPart;
	Parms.CallFunc_Split_FilenamePart = CallFunc_Split_FilenamePart;
	Parms.CallFunc_Split_ExtensionPart = CallFunc_Split_ExtensionPart;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



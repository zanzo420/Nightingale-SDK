#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x320 - 0x308)
// BlueprintGeneratedClass BP_POIRealmTagPredicatedProxy.BP_POIRealmTagPredicatedProxy_C
class ABP_POIRealmTagPredicatedProxy_C : public APOIRealmTagPredicatedSubLevelProxy
{
public:
	class UStaticMeshComponent*                  Cylinder;                                          // 0x308(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                  TextRender;                                        // 0x310(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x318(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_POIRealmTagPredicatedProxy_C* GetDefaultObj();

	void UserConstructionScript(const struct FPOIStreamingLevelDefinition& CallFunc_GetStreamingLevelDefinitionFromProxy_ReturnValue, int32 CallFunc_Max_ReturnValue, const class FString& CallFunc_BreakSoftObjectPath_PathString, double CallFunc_Conv_IntToDouble_ReturnValue, const class FString& CallFunc_Split_PathPart, const class FString& CallFunc_Split_FilenamePart, const class FString& CallFunc_Split_ExtensionPart, const struct FVector& CallFunc_MakeVector_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
};

}



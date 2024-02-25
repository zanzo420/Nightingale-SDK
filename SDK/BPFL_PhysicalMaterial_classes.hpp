#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_PhysicalMaterial.BPFL_PhysicalMaterial_C
class UBPFL_PhysicalMaterial_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPFL_PhysicalMaterial_C* GetDefaultObj();

	void SurfaceTypeToString(enum class EPhysicalSurface Surface, class UObject* __WorldContext, class FString* AsString, const struct FS_PhysicalSurfaceToString& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
};

}



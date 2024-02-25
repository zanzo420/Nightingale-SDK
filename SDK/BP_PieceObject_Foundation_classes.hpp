#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x1F1 - 0x1F1)
// BlueprintGeneratedClass BP_PieceObject_Foundation.BP_PieceObject_Foundation_C
class UBP_PieceObject_Foundation_C : public UBP_StructureCompositePiece_C
{
public:

	static class UClass* StaticClass();
	static class UBP_PieceObject_Foundation_C* GetDefaultObj();

	class UStaticMeshComponent* GetEntitySupportMesh(const TArray<class UStaticMeshComponent*>& EntitySupportMeshes, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UStaticMeshComponent* CallFunc_Array_Get_Item, class UStaticMeshComponent* CallFunc_Array_Get_Item_1, bool CallFunc_ComponentHasTag_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UCompositePieceInstance* CallFunc_GetMeshInstance_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, TArray<class UStaticMeshComponent*>& CallFunc_GetMeshes_OutMeshes, bool CallFunc_Greater_IntInt_ReturnValue);
	void GetSupportMesh(class UStaticMeshComponent** SupportMesh, const TArray<class UStaticMeshComponent*>& EntitySupportMeshes, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UStaticMeshComponent* CallFunc_Array_Get_Item, class UStaticMeshComponent* CallFunc_Array_Get_Item_1, bool CallFunc_ComponentHasTag_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UCompositePieceInstance* CallFunc_GetMeshInstance_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, TArray<class UStaticMeshComponent*>& CallFunc_GetMeshes_OutMeshes, bool CallFunc_Greater_IntInt_ReturnValue);
};

}



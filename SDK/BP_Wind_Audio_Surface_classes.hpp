#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x300 - 0x2A8)
// BlueprintGeneratedClass BP_Wind_Audio_Surface.BP_Wind_Audio_Surface_C
class UBP_Wind_Audio_Surface_C : public USceneComponent
{
public:
	uint8                                        Pad_7574[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAmbienceManager*                      Ambience_Manager;                                  // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<struct FTransform>                    ChildTransforms;                                   // 0x2C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FVector>                       ChildVectors;                                      // 0x2D0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UAkSwitchValue*                        MaterialSwitch;                                    // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    ScopedAkComponent;                                 // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                         AkEventOverride;                                   // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                         AkEvent;                                           // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Wind_Audio_Surface_C* GetDefaultObj();

	void GetClosestPointOnMesh(const struct FVector& CameraLocation, struct FVector* ClosestLocation, class FName Temp_name_Variable, class USceneComponent* CallFunc_GetAttachParent_ReturnValue, class UPrimitiveComponent* K2Node_DynamicCast_AsPrimitive_Component, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetClosestPointOnComponentCollision_OutPointOnBody, enum class EGetResult CallFunc_GetClosestPointOnComponentCollision_Branches, float CallFunc_GetClosestPointOnComponentCollision_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void GetCameraLocation(struct FVector* CameraLocation, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue);
	void GetChildren(const TArray<class USceneComponent*>& ChildComponents, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, class USceneComponent* CallFunc_Array_Get_Item, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void GetSoundLocation(struct FVector* Location, const struct FVector& CameraLocation, const struct FVector& CallFunc_GetClosestPointOnMesh_ClosestLocation, const struct FVector& CallFunc_GetCameraLocation_CameraLocation, const struct FVector& CallFunc_FindClosestVectorToTargetVector_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void ReceiveBeginPlay();
	void GetAmbienceManager();
	void WindOneShot();
	void ExecuteUbergraph_BP_Wind_Audio_Surface(int32 EntryPoint, class UAmbienceManager* CallFunc_GetAmbienceManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FVector& CallFunc_GetSoundLocation_Location, float CallFunc_GetWindSpeed_ReturnValue, class UScopedAkComponent* CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Array_IsValidIndex_ReturnValue, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, int32 CallFunc_PostAkEvent_ReturnValue);
};

}



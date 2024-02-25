#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// BlueprintGeneratedClass ANS_OffhandOverlayBypass.ANS_OffhandOverlayBypass_C
class UANS_OffhandOverlayBypass_C : public UAnimNotifyState
{
public:

	static class UClass* StaticClass();
	static class UANS_OffhandOverlayBypass_C* GetDefaultObj();

	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UABP_HMU_TP_Player_C* K2Node_DynamicCast_AsABP_HMU_TP_Player, bool K2Node_DynamicCast_bSuccess);
	bool Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime, struct FAnimNotifyEventReference& EventReference, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UABP_HMU_TP_Player_C* K2Node_DynamicCast_AsABP_HMU_TP_Player, bool K2Node_DynamicCast_bSuccess);
};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xA38 - 0xA38)
// BlueprintGeneratedClass BP_Structure_Functional_Container_PI.BP_Structure_Functional_Container_PI_C
class ABP_Structure_Functional_Container_PI_C : public ABP_Structure_Functional_C
{
public:

	static class UClass* StaticClass();
	static class ABP_Structure_Functional_Container_PI_C* GetDefaultObj();

	TScriptInterface<class IItemContainer> GetContainerFromProvider(struct FItemContainerHandle& ContainerHandle);
	TScriptInterface<class IItemContainer> GetDefaultContainer();
	bool HasContainer(TScriptInterface<class IItemContainer>& Container, const struct FItemContainerHandle& CallFunc_GetContainerHandle_ReturnValue, bool CallFunc_HasContainerFromHandle_ReturnValue);
	bool HasContainerFromHandle(struct FItemContainerHandle& ContainerHandle);
	void GetInventoryContainerInterface(class AActor* RequestingActor, TScriptInterface<class IItemContainer>* ContainerInterface, class APlayerState* PlayerState, const class FString& CallFunc_GetFunctionName_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue, class UInventoryComponentBase* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IItemContainer> CallFunc_GetStorageBox_Container, bool CallFunc_GetStorageBox_ReturnValue);
};

}



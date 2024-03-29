#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class IrisCore.DataStream
class UDataStream : public UObject
{
public:

	static class UClass* StaticClass();
	static class UDataStream* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class IrisCore.DataStreamDefinitions
class UDataStreamDefinitions : public UObject
{
public:
	TArray<struct FDataStreamDefinition>         DataStreamDefinitions;                             // 0x28(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	uint8                                        Pad_113D[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDataStreamDefinitions* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class IrisCore.DataStreamManager
class UDataStreamManager : public UDataStream
{
public:
	uint8                                        Pad_1141[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDataStreamManager* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class IrisCore.NetObjectFilterConfig
class UNetObjectFilterConfig : public UObject
{
public:
	enum class ENetFilterType                    FilterType;                                        // 0x28(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1144[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNetObjectFilterConfig* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class IrisCore.FilterOutNetObjectFilterConfig
class UFilterOutNetObjectFilterConfig : public UNetObjectFilterConfig
{
public:

	static class UClass* StaticClass();
	static class UFilterOutNetObjectFilterConfig* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class IrisCore.NetObjectFilter
class UNetObjectFilter : public UObject
{
public:
	uint8                                        Pad_1148[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNetObjectFilter* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class IrisCore.FilterOutNetObjectFilter
class UFilterOutNetObjectFilter : public UNetObjectFilter
{
public:

	static class UClass* StaticClass();
	static class UFilterOutNetObjectFilter* GetDefaultObj();

};

// 0x8 (0xE8 - 0xE0)
// Class IrisCore.IrisObjectReferencePackageMap
class UIrisObjectReferencePackageMap : public UPackageMap
{
public:
	uint8                                        Pad_114B[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UIrisObjectReferencePackageMap* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class IrisCore.NetObjectPrioritizer
class UNetObjectPrioritizer : public UObject
{
public:

	static class UClass* StaticClass();
	static class UNetObjectPrioritizer* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class IrisCore.LocationBasedNetObjectPrioritizer
class ULocationBasedNetObjectPrioritizer : public UNetObjectPrioritizer
{
public:
	uint8                                        Pad_114D[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULocationBasedNetObjectPrioritizer* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class IrisCore.NetBlobHandler
class UNetBlobHandler : public UObject
{
public:
	uint8                                        Pad_114E[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNetBlobHandler* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class IrisCore.NetBlobHandlerDefinitions
class UNetBlobHandlerDefinitions : public UObject
{
public:
	TArray<struct FNetBlobHandlerDefinition>     NetBlobHandlerDefinitions;                         // 0x28(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UNetBlobHandlerDefinitions* GetDefaultObj();

};

// 0x0 (0x38 - 0x38)
// Class IrisCore.NetObjectBlobHandler
class UNetObjectBlobHandler : public UNetBlobHandler
{
public:

	static class UClass* StaticClass();
	static class UNetObjectBlobHandler* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class IrisCore.NetObjectConnectionFilterConfig
class UNetObjectConnectionFilterConfig : public UNetObjectFilterConfig
{
public:
	uint16                                       MaxObjectCount;                                    // 0x30(0x2)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1155[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNetObjectConnectionFilterConfig* GetDefaultObj();

};

// 0x50 (0xA0 - 0x50)
// Class IrisCore.NetObjectConnectionFilter
class UNetObjectConnectionFilter : public UNetObjectFilter
{
public:
	uint8                                        Pad_1156[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNetObjectConnectionFilter* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class IrisCore.NetObjectPrioritizerConfig
class UNetObjectPrioritizerConfig : public UObject
{
public:

	static class UClass* StaticClass();
	static class UNetObjectPrioritizerConfig* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class IrisCore.NetObjectCountLimiterConfig
class UNetObjectCountLimiterConfig : public UNetObjectPrioritizerConfig
{
public:
	enum class ENetObjectCountLimiterMode        Mode;                                              // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       MaxObjectCount;                                    // 0x2C(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Priority;                                          // 0x30(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OwningConnectionPriority;                          // 0x34(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableOwnedObjectsFastLane;                       // 0x38(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1159[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNetObjectCountLimiterConfig* GetDefaultObj();

};

// 0x68 (0x90 - 0x28)
// Class IrisCore.NetObjectCountLimiter
class UNetObjectCountLimiter : public UNetObjectPrioritizer
{
public:
	uint8                                        Pad_115A[0x68];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNetObjectCountLimiter* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class IrisCore.NetObjectFilterDefinitions
class UNetObjectFilterDefinitions : public UObject
{
public:
	TArray<struct FNetObjectFilterDefinition>    NetObjectFilterDefinitions;                        // 0x28(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UNetObjectFilterDefinitions* GetDefaultObj();

};

// 0x48 (0x78 - 0x30)
// Class IrisCore.NetObjectGridFilterConfig
class UNetObjectGridFilterConfig : public UNetObjectFilterConfig
{
public:
	uint32                                       ViewPosRelevancyFrameCount;                        // 0x30(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CellSizeX;                                         // 0x34(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CellSizeY;                                         // 0x38(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxCullDistance;                                   // 0x3C(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultCullDistance;                               // 0x40(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1160[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               MinPos;                                            // 0x48(0x18)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               MaxPos;                                            // 0x60(0x18)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNetObjectGridFilterConfig* GetDefaultObj();

};

// 0xA8 (0xF8 - 0x50)
// Class IrisCore.NetObjectGridFilter
class UNetObjectGridFilter : public UNetObjectFilter
{
public:
	uint8                                        Pad_1162[0xA8];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNetObjectGridFilter* GetDefaultObj();

};

// 0x8 (0x100 - 0xF8)
// Class IrisCore.NetObjectGridWorldLocFilter
class UNetObjectGridWorldLocFilter : public UNetObjectGridFilter
{
public:
	uint8                                        Pad_1165[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNetObjectGridWorldLocFilter* GetDefaultObj();

};

// 0x50 (0x148 - 0xF8)
// Class IrisCore.NetObjectGridFragmentLocFilter
class UNetObjectGridFragmentLocFilter : public UNetObjectGridFilter
{
public:
	uint8                                        Pad_1168[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNetObjectGridFragmentLocFilter* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class IrisCore.NetObjectPrioritizerDefinitions
class UNetObjectPrioritizerDefinitions : public UObject
{
public:
	TArray<struct FNetObjectPrioritizerDefinition> NetObjectPrioritizerDefinitions;                   // 0x28(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UNetObjectPrioritizerDefinitions* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class IrisCore.NetRPCHandler
class UNetRPCHandler : public UNetBlobHandler
{
public:
	uint8                                        Pad_116E[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNetRPCHandler* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class IrisCore.NetTokenDataStream
class UNetTokenDataStream : public UDataStream
{
public:
	uint8                                        Pad_116F[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNetTokenDataStream* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class IrisCore.NopNetObjectFilterConfig
class UNopNetObjectFilterConfig : public UNetObjectFilterConfig
{
public:

	static class UClass* StaticClass();
	static class UNopNetObjectFilterConfig* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class IrisCore.NopNetObjectFilter
class UNopNetObjectFilter : public UNetObjectFilter
{
public:

	static class UClass* StaticClass();
	static class UNopNetObjectFilter* GetDefaultObj();

};

// 0xE8 (0x110 - 0x28)
// Class IrisCore.ReplicationBridge
class UReplicationBridge : public UObject
{
public:
	uint8                                        Pad_1173[0xE8];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UReplicationBridge* GetDefaultObj();

};

// 0x3A0 (0x4B0 - 0x110)
// Class IrisCore.ObjectReplicationBridge
class UObjectReplicationBridge : public UReplicationBridge
{
public:
	uint8                                        Pad_1175[0x3A0];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UObjectReplicationBridge* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class IrisCore.ObjectReplicationBridgeConfig
class UObjectReplicationBridgeConfig : public UObject
{
public:
	TArray<struct FObjectReplicationBridgePollConfig> PollConfigs;                                       // 0x28(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	TArray<struct FObjectReplicationBridgeFilterConfig> FilterConfigs;                                     // 0x38(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	TArray<struct FObjectReplicationBridgePrioritizerConfig> PrioritizerConfigs;                                // 0x48(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	TArray<struct FObjectReplicationBridgeDeltaCompressionConfig> DeltaCompressionConfigs;                           // 0x58(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	class FName                                  DefaultSpatialFilterName;                          // 0x68(0x8)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  RequiredNetDriverChannelClassName;                 // 0x70(0x8)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UObjectReplicationBridgeConfig* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class IrisCore.SequentialPartialNetBlobHandlerConfig
class USequentialPartialNetBlobHandlerConfig : public UObject
{
public:
	uint32                                       MaxPartBitCount;                                   // 0x28(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint32                                       MaxPartCount;                                      // 0x2C(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class USequentialPartialNetBlobHandlerConfig* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class IrisCore.PartialNetObjectAttachmentHandlerConfig
class UPartialNetObjectAttachmentHandlerConfig : public USequentialPartialNetBlobHandlerConfig
{
public:
	uint32                                       BitCountSplitThreshold;                            // 0x30(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_117E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPartialNetObjectAttachmentHandlerConfig* GetDefaultObj();

};

// 0x10 (0x48 - 0x38)
// Class IrisCore.SequentialPartialNetBlobHandler
class USequentialPartialNetBlobHandler : public UNetBlobHandler
{
public:
	uint8                                        Pad_117F[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USequentialPartialNetBlobHandler* GetDefaultObj();

};

// 0x0 (0x48 - 0x48)
// Class IrisCore.PartialNetObjectAttachmentHandler
class UPartialNetObjectAttachmentHandler : public USequentialPartialNetBlobHandler
{
public:

	static class UClass* StaticClass();
	static class UPartialNetObjectAttachmentHandler* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class IrisCore.ReplicationDataStream
class UReplicationDataStream : public UDataStream
{
public:
	uint8                                        Pad_1180[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UReplicationDataStream* GetDefaultObj();

};

// 0x30 (0x58 - 0x28)
// Class IrisCore.ReplicationSystem
class UReplicationSystem : public UObject
{
public:
	uint8                                        Pad_1181[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UReplicationBridge*                    ReplicationBridge;                                 // 0x38(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1182[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UReplicationSystem* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class IrisCore.SphereNetObjectPrioritizerConfig
class USphereNetObjectPrioritizerConfig : public UNetObjectPrioritizerConfig
{
public:
	float                                        InnerRadius;                                       // 0x28(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OuterRadius;                                       // 0x2C(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InnerPriority;                                     // 0x30(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OuterPriority;                                     // 0x34(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutsidePriority;                                   // 0x38(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1184[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USphereNetObjectPrioritizerConfig* GetDefaultObj();

};

// 0x8 (0x68 - 0x60)
// Class IrisCore.SphereNetObjectPrioritizer
class USphereNetObjectPrioritizer : public ULocationBasedNetObjectPrioritizer
{
public:
	uint8                                        Pad_1186[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USphereNetObjectPrioritizer* GetDefaultObj();

};

// 0x8 (0x48 - 0x40)
// Class IrisCore.SphereWithOwnerBoostNetObjectPrioritizerConfig
class USphereWithOwnerBoostNetObjectPrioritizerConfig : public USphereNetObjectPrioritizerConfig
{
public:
	float                                        OwnerPriorityBoost;                                // 0x40(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1189[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USphereWithOwnerBoostNetObjectPrioritizerConfig* GetDefaultObj();

};

// 0x38 (0xA0 - 0x68)
// Class IrisCore.SphereWithOwnerBoostNetObjectPrioritizer
class USphereWithOwnerBoostNetObjectPrioritizer : public USphereNetObjectPrioritizer
{
public:
	uint8                                        Pad_118B[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USphereWithOwnerBoostNetObjectPrioritizer* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class IrisCore.ReplicationStateDescriptorConfig
class UReplicationStateDescriptorConfig : public UObject
{
public:
	TArray<struct FSupportsStructNetSerializerConfig> SupportsStructNetSerializerList;                   // 0x28(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UReplicationStateDescriptorConfig* GetDefaultObj();

};

}



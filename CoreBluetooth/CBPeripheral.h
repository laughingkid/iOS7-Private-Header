/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"



@class CBCentralManager, NSArray, NSMutableArray, NSMutableDictionary, NSNumber, NSString, NSUUID;



@interface CBPeripheral : NSObject <NSCopying>

{

    id <CBPeripheralDelegate> _delegate;

    struct __CFUUID *_UUID;

    NSUUID *_identifier;

    NSString *_name;

    NSNumber *_RSSI;

    long long _state;

    NSMutableArray *_services;

    CBCentralManager *_centralManager;

    NSMutableDictionary *_attributes;

    _Bool _isPaired;

    _Bool _isConnectedToSystem;

}



@property(retain) NSNumber *RSSI; // @synthesize RSSI=_RSSI;

@property(readonly, nonatomic) struct __CFUUID *UUID; // @synthesize UUID=_UUID;

- (void)acceptPairing:(_Bool)arg1 ofType:(id)arg2 withPasskey:(id)arg3;

- (id)attributeForHandle:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

@property(nonatomic) __weak id <CBPeripheralDelegate> delegate; // @synthesize delegate=_delegate;

- (id)description;

- (void)discoverCharacteristics:(id)arg1 forService:(id)arg2;

- (void)discoverDescriptorsForCharacteristic:(id)arg1;

- (void)discoverIncludedServices:(id)arg1 forService:(id)arg2;

- (void)discoverServices:(id)arg1;

- (void)handleAttributeEvent:(id)arg1 args:(id)arg2 attributeSelector:(SEL)arg3 delegateSelector:(SEL)arg4;

- (void)handleCharacteristicDescriptorsDiscovered:(id)arg1;

- (void)handleCharacteristicEvent:(id)arg1 characteristicSelector:(SEL)arg2 delegateSelector:(SEL)arg3;

- (void)handleCharacteristicValueNotifying:(id)arg1;

- (void)handleCharacteristicValueUpdated:(id)arg1;

- (void)handleCharacteristicValueWritten:(id)arg1;

- (void)handleConnection:(_Bool)arg1;

- (void)handleConnectionStateUpdated:(_Bool)arg1;

- (void)handleDescriptorEvent:(id)arg1 descriptorSelector:(SEL)arg2 delegateSelector:(SEL)arg3;

- (void)handleDescriptorValueUpdated:(id)arg1;

- (void)handleDescriptorValueWritten:(id)arg1;

- (void)handleDisconnection;

- (void)handleMsg:(int)arg1 args:(id)arg2;

- (void)handleNameUpdated:(id)arg1;

- (void)handlePairingCompleted:(id)arg1;

- (void)handlePairingRequested:(id)arg1;

- (void)handleRSSIUpdated:(id)arg1;

- (void)handleServiceCharacteristicsDiscovered:(id)arg1;

- (void)handleServiceEvent:(id)arg1 serviceSelector:(SEL)arg2 delegateSelector:(SEL)arg3;

- (void)handleServiceIncludedServicesDiscovered:(id)arg1;

- (void)handleServicesChanged:(id)arg1;

- (void)handleServicesDiscovered:(id)arg1;

- (void)handleUnpaired:(id)arg1;

- (void)handleWritesExecuted:(id)arg1;

- (_Bool)hasTag:(id)arg1;

@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;

- (id)initWithCentralManager:(id)arg1 dictionary:(id)arg2;

- (void)invalidateAllAttributes;

@property(readonly) _Bool isConnected; // @dynamic isConnected;

@property(readonly, nonatomic) _Bool isConnectedToSystem; // @synthesize isConnectedToSystem=_isConnectedToSystem;

@property(readonly, nonatomic) _Bool isPaired; // @synthesize isPaired=_isPaired;

@property(retain) NSString *name; // @synthesize name=_name;

- (void)pair;

- (void)readRSSI;

- (void)readValueForCharacteristic:(id)arg1;

- (void)readValueForDescriptor:(id)arg1;

- (oneway void)release;

- (void)reliablyWriteValues:(id)arg1 forCharacteristics:(id)arg2;

- (void)removeAttributeForHandle:(id)arg1;

- (void)sendMsg:(int)arg1 args:(id)arg2;

- (void)sendMsg:(int)arg1 requiresConnected:(_Bool)arg2 args:(id)arg3;

- (id)sendSyncMsg:(int)arg1 args:(id)arg2;

@property(retain) NSArray *services; // @synthesize services=_services;

- (void)setAttribute:(id)arg1 forHandle:(id)arg2;

- (void)setBroadcastValue:(_Bool)arg1 forCharacteristic:(id)arg2;

- (void)setNotifyValue:(_Bool)arg1 forCharacteristic:(id)arg2;

- (void)setOrphan;

@property long long state; // @synthesize state=_state;

- (void)tag:(id)arg1;

- (void)unpair;

- (void)untag:(id)arg1;

- (void)writeValue:(id)arg1 forCharacteristic:(id)arg2 type:(long long)arg3;

- (void)writeValue:(id)arg1 forDescriptor:(id)arg2;



@end



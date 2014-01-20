/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableArray;



@interface MFIMAPCommandPipeline : NSObject

{

    unsigned long long _chunkSize;

    unsigned long long _expectedSize;

    unsigned int _full:1;

    unsigned int _sending:1;

    NSMutableArray *_fetchUnits;

}



- (void)_removeFetchUnitMatchingResponse:(id)arg1;

- (void)addFetchCommandForUid:(unsigned int)arg1 fetchItem:(id)arg2 expectedLength:(unsigned long long)arg3 bodyDataConsumer:(id)arg4 consumerSection:(id)arg5;

- (unsigned long long)chunkSize;

- (void)dealloc;

- (unsigned long long)expectedSize;

- (id)failureResponsesFromSendingCommandsWithConnection:(id)arg1;

- (_Bool)isFull;

- (_Bool)isSending;

- (void)setChunkSize:(unsigned long long)arg1;

- (void)setFull:(_Bool)arg1;



@end


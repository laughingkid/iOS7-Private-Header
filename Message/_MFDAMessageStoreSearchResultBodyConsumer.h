/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "DAMailboxFetchSearchResultConsumer.h"

#import "DAMailboxStreamingContentConsumer.h"



@class MFConditionLock, MFError;



@interface _MFDAMessageStoreSearchResultBodyConsumer : NSObject <DAMailboxFetchSearchResultConsumer, DAMailboxStreamingContentConsumer>

{

    MFConditionLock *_doneCondition;

    id <MFDAStreamingContentConsumer> _streamConsumer;

    MFError *_error;

}



- (void)actionFailed:(int)arg1 forTask:(id)arg2 error:(id)arg3;

- (void)consumeData:(char *)arg1 length:(int)arg2 format:(int)arg3 mailMessage:(id)arg4;

- (void)dealloc;

- (void)didEndStreamingForMailMessage:(id)arg1;

@property(retain, nonatomic) MFError *error; // @synthesize error=_error;

- (id)init;

- (void)searchResultFetchedWithResponses:(id)arg1;

@property(retain, nonatomic) id <MFDAStreamingContentConsumer> streamConsumer; // @synthesize streamConsumer=_streamConsumer;

- (_Bool)shouldBeginStreamingForMailMessage:(id)arg1 format:(int)arg2;

- (void)waitUntilDone;

- (_Bool)waitUntilDoneBeforeDate:(id)arg1;



@end



/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "MFMessageDataConsumerFactory.h"



@class MFMessage, MFMessageLibrary;



@interface _MFDALibraryConsumerFactory : NSObject <MFMessageDataConsumerFactory>

{

    MFMessageLibrary *_library;

    MFMessage *_message;

}



- (id)dataConsumerForPart:(id)arg1;

- (void)dealloc;

@property(retain, nonatomic) MFMessageLibrary *library; // @synthesize library=_library;

@property(retain, nonatomic) MFMessage *message; // @synthesize message=_message;



@end


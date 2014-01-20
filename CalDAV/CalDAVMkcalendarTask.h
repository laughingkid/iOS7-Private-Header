/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CoreDAVTask.h"



@class NSSet;



@interface CalDAVMkcalendarTask : CoreDAVTask

{

    NSSet *_setElements;

}



- (id)copyDefaultParserForContentType:(id)arg1;

- (void)dealloc;

- (id)description;

- (void)finishCoreDAVTaskWithError:(id)arg1;

- (id)httpMethod;

- (id)initWithPropertiesToSet:(id)arg1 atURL:(id)arg2;

- (id)initWithURL:(id)arg1;

- (id)requestBody;

@property(retain) NSSet *setElements; // @synthesize setElements=_setElements;

- (void)setSupportForEvents:(_Bool)arg1 tasks:(_Bool)arg2;



// Remaining properties

@property(nonatomic) id <CalDAVMkcalendarTaskDelegate><CoreDAVTaskDelegate> delegate; // @dynamic delegate;



@end


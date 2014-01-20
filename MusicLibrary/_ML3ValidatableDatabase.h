/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSObject<OS_dispatch_queue>, NSString;



__attribute__((visibility("hidden")))

@interface _ML3ValidatableDatabase : NSObject

{

    unsigned long long _queueID;

    NSString *_databasePath;

    unsigned long long _validationState;

    NSObject<OS_dispatch_queue> *_validationSerialQueue;

}



- (void).cxx_destruct;

- (_Bool)currentQueueIsValidationQueue;

@property(copy, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;

- (id)init;

- (id)initWithDatabasePath:(id)arg1;

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *validationSerialQueue; // @synthesize validationSerialQueue=_validationSerialQueue;

@property(nonatomic) unsigned long long validationState; // @synthesize validationState=_validationState;



@end


/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class ML3DatabaseConnection, NSThread;



__attribute__((visibility("hidden")))

@interface _ML3DatabaseConnectionWrapper : NSObject

{

    ML3DatabaseConnection *_connection;

    NSThread *_owningThread;

    NSThread *_borrowingThread;

    unsigned long long _useCount;

}



- (void).cxx_destruct;

@property(retain, nonatomic) NSThread *borrowingThread; // @synthesize borrowingThread=_borrowingThread;

@property(retain, nonatomic) ML3DatabaseConnection *connection; // @synthesize connection=_connection;

- (id)description;

- (id)initWithConnection:(id)arg1;

@property(retain, nonatomic) NSThread *owningThread; // @synthesize owningThread=_owningThread;

@property(nonatomic) unsigned long long useCount; // @synthesize useCount=_useCount;



@end


/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableArray;



@interface GKRouter : NSObject

{

    NSMutableArray *_routes;

    NSMutableArray *_handlers;

}



- (void)dealloc;

- (_Bool)dispatch:(id)arg1;

- (void)from:(id)arg1 to:(id)arg2;

- (id)init;

- (void)scheme:(id)arg1 from:(id)arg2 to:(id)arg3;



@end



/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class SKPhysicsBody;



@interface SKPhysicsContact : NSObject

{

    SKPhysicsBody *_bodyA;

    SKPhysicsBody *_bodyB;

    double _collisionImpulse;

    struct CGPoint _contactPoint;

}



+ (id)allocWithZone:(struct _NSZone *)arg1;

+ (id)copyWithZone:(struct _NSZone *)arg1;

- (id).cxx_construct;

- (void).cxx_destruct;

@property(readonly, nonatomic) SKPhysicsBody *bodyA; // @synthesize bodyA=_bodyA;

@property(readonly, nonatomic) SKPhysicsBody *bodyB; // @synthesize bodyB=_bodyB;

@property(readonly, nonatomic) double collisionImpulse; // @synthesize collisionImpulse=_collisionImpulse;

@property(readonly, nonatomic) struct CGPoint contactPoint; // @synthesize contactPoint=_contactPoint;



@end


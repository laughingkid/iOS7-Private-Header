/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSArray, NSString, UIAElement, UIAXElement;



@interface UIARecorderAction : NSObject

{

    _Bool _elementCanScroll;

    int _actionType;

    NSArray *_points;

    UIAElement *_element;

    UIAXElement *_axElement;

    long long _startTime;

    long long _lastUpdateTime;

    NSString *_keyName;

    NSArray *_expression;

    unsigned long long _touchCount;

    struct CGPoint _startLocation;

    struct CGPoint _endLocation;

}



+ (_Bool)_elementCanScroll:(id)arg1;

+ (id)actionWithAXEventRepresentation:(id)arg1;

+ (id)expressionForElement:(id)arg1;

- (id)_initWithAXEventRepresentation:(id)arg1;

@property int actionType; // @synthesize actionType=_actionType;

@property(retain) UIAXElement *axElement; // @synthesize axElement=_axElement;

- (void)dealloc;

@property(readonly) double duration;

@property(retain) UIAElement *element; // @synthesize element=_element;

@property _Bool elementCanScroll; // @synthesize elementCanScroll=_elementCanScroll;

@property struct CGPoint endLocation; // @synthesize endLocation=_endLocation;

@property(retain) NSArray *expression; // @synthesize expression=_expression;

@property(retain) NSString *keyName; // @synthesize keyName=_keyName;

@property long long lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;

@property(retain) NSArray *points; // @synthesize points=_points;

@property struct CGPoint startLocation; // @synthesize startLocation=_startLocation;

@property long long startTime; // @synthesize startTime=_startTime;

@property unsigned long long touchCount; // @synthesize touchCount=_touchCount;

- (void)updateWithAXEventRepresentation:(id)arg1;



@end



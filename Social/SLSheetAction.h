/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSString;



@interface SLSheetAction : NSObject

{

    _Bool _valuePending;

    int _actionType;

    NSString *_title;

    NSString *_value;

    id _actionBlock;

}



- (void).cxx_destruct;

@property(copy, nonatomic) id actionBlock; // @synthesize actionBlock=_actionBlock;

@property(nonatomic) int actionType; // @synthesize actionType=_actionType;

- (id)initWithTitle:(id)arg1 value:(id)arg2 actionBlock:(id)arg3;

@property(copy, nonatomic) NSString *title; // @synthesize title=_title;

@property(copy, nonatomic) NSString *value; // @synthesize value=_value;

@property(nonatomic) _Bool valuePending; // @synthesize valuePending=_valuePending;



@end


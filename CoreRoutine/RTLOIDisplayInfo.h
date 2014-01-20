/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSDate, NSString;



__attribute__((visibility("hidden")))

@interface RTLOIDisplayInfo : NSObject

{

    int _style;

    long long _type;

    NSString *_urlDestinationAddress;

    NSString *_urlName;

    NSString *_unknownTypeName;

    double _eta;

    NSDate *_arrival;

    NSDate *_deparature;

}



- (void).cxx_destruct;

@property(readonly, nonatomic) NSDate *arrival; // @synthesize arrival=_arrival;

@property(readonly, nonatomic) NSDate *deparature; // @synthesize deparature=_deparature;

- (id)description;

@property(readonly, nonatomic) double eta; // @synthesize eta=_eta;

- (id)initWithArrivalStyle:(int)arg1 type:(long long)arg2 urlDestinationAddress:(id)arg3 urlName:(id)arg4 unknownTypeName:(id)arg5 arrival:(id)arg6 departure:(id)arg7;

- (id)initWithDurationStyle:(int)arg1 type:(long long)arg2 urlDestinationAddress:(id)arg3 urlName:(id)arg4 unknownTypeName:(id)arg5 eta:(double)arg6;

- (id)initWithStyle:(int)arg1 type:(long long)arg2 urlDestinationAddress:(id)arg3 urlName:(id)arg4 unknownTypeName:(id)arg5 eta:(double)arg6 arrival:(id)arg7 departure:(id)arg8;

- (_Bool)isEquivalentToDisplayInfo:(id)arg1;

- (id)localizedDescription;

- (id)mapsURL;

@property(readonly, nonatomic) int style; // @synthesize style=_style;

@property(readonly, nonatomic) long long type; // @synthesize type=_type;

@property(readonly, nonatomic) NSString *unknownTypeName; // @synthesize unknownTypeName=_unknownTypeName;

@property(readonly, nonatomic) NSString *urlDestinationAddress; // @synthesize urlDestinationAddress=_urlDestinationAddress;

@property(readonly, nonatomic) NSString *urlName; // @synthesize urlName=_urlName;



@end


/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@interface CaliTIPHandler : NSObject

{

}



+ (id)calculateDiffsForEvent:(id)arg1 inMessage:(id)arg2;

+ (id)debugStringForEvent:(id)arg1;

+ (_Bool)diffsAreImportant:(id)arg1;

+ (_Bool)doScheduleChanges:(id)arg1 applyToEvent:(id)arg2 inCalendar:(id)arg3;

+ (id)getOccurrenceChange:(id)arg1 forEvent:(id)arg2 inCalendar:(id)arg3;

+ (void)initialize;

+ (_Bool)isAddressMe:(id)arg1 forAccount:(id)arg2;

+ (_Bool)logiTIPDetail;

+ (id)myAddressInAccount:(id)arg1 forEvent:(id)arg2;

+ (_Bool)myStatusNeedsActionForEvent:(id)arg1 withAccount:(id)arg2;

+ (void)processMessage:(id)arg1 inCalendar:(id)arg2;

+ (void)processMessages:(id)arg1 inCalendar:(id)arg2;

+ (void)setLogiTIPDetail:(_Bool)arg1;



@end



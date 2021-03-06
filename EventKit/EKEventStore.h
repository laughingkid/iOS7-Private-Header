/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "EKDaemonConnection.h"



@class EKAlarm, EKCalendar, EKDaemonConnection, NSArray, NSMutableDictionary, NSMutableSet, NSNumber, NSObject<OS_dispatch_queue>, NSString, NSTimeZone;



@interface EKEventStore : NSObject <EKDaemonConnection>

{

    unsigned int _flags;

    NSMutableDictionary *_registeredObjects;

    NSMutableDictionary *_publicRegisteredObjects;

    NSMutableSet *_insertedObjects;

    NSMutableSet *_deletedObjects;

    NSMutableSet *_updatedObjects;

    NSNumber *_defaultTimedAlarmOffset;

    NSNumber *_defaultAllDayAlarmOffset;

    EKCalendar *_defaultCalendarForNewEvents;

    EKCalendar *_defaultCalendarForNewReminders;

    EKDaemonConnection *_database;

    double _lastDatabaseNotificationTimestamp;

    NSTimeZone *_timeZone;

    NSMutableDictionary *_calendars;

    NSMutableDictionary *_sources;

    NSMutableSet *_objectsPendingCommit;

    NSObject<OS_dispatch_queue> *_calendarQueue;

    NSObject<OS_dispatch_queue> *_registeredQueue;

    NSObject<OS_dispatch_queue> *_unsavedChangesQueue;

    NSObject<OS_dispatch_queue> *_dbChangedQueue;

    NSMutableDictionary *_cachedValidatedEmails;

}



+ (long long)authorizationStatusForEntityType:(unsigned long long)arg1;

+ (Class)classForEntityName:(id)arg1;

+ (Class)publicClassForEntityName:(id)arg1;

- (void)_accessStatusChanged;

- (id)_addFetchedObjectWithID:(id)arg1;

- (void)_addObjectToPendingCommits:(id)arg1;

- (id)_allCalendars;

@property(retain, nonatomic) NSMutableDictionary *_cachedValidatedEmails; // @synthesize _cachedValidatedEmails;

- (_Bool)_calendar:(id)arg1 supportsEntityType:(unsigned long long)arg2;

- (id)_calendarItemsMatchingPredicate:(id)arg1;

- (id)_calendarWithID:(id)arg1;

@property(retain, nonatomic) NSMutableDictionary *_calendars; // @synthesize _calendars;

- (void)_databaseChangedExternally;

@property(retain, nonatomic) EKCalendar *_defaultCalendarForNewEvents; // @synthesize _defaultCalendarForNewEvents;

@property(retain, nonatomic) EKCalendar *_defaultCalendarForNewReminders; // @synthesize _defaultCalendarForNewReminders;

- (void)_deleteObject:(id)arg1;

- (id)_eventWithURI:(id)arg1 checkValid:(_Bool)arg2;

- (void)_forgetRegisteredObjects;

- (void)_insertObject:(id)arg1;

- (_Bool)_parseURI:(id)arg1 expectedScheme:(id)arg2 identifier:(id *)arg3 options:(id *)arg4;

- (void)_performServerFunction:(id)arg1 replyHandler:(void)arg2;

- (id)_predicateForRemindersWithDate:(id)arg1 useAsCompletionDate:(_Bool)arg2 calendars:(id)arg3 limitToCompletedOrIncomplete:(_Bool)arg4 completed:(_Bool)arg5 includeDatesBefore:(_Bool)arg6 sortOrder:(int)arg7;

- (void)_protectedDataDidBecomeAvailable;

- (void)_protectedDataWillBecomeUnavailable;

- (void)_refreshDASource:(id)arg1 isUserRequested:(_Bool)arg2;

- (void)_registerObject:(id)arg1;

- (void)_registerObjectImmediate:(id)arg1;

- (void)_requestAccessForEntityType:(unsigned long long)arg1;

- (void)_reregisterObject:(id)arg1 oldID:(id)arg2;

- (void)_saveWithoutNotify;

@property(retain, nonatomic) NSMutableDictionary *_sources; // @synthesize _sources;

- (void)_trackModifiedObject:(id)arg1;

- (void)_unregisterObject:(id)arg1;

- (void)_validateObjectIDs:(id)arg1 completion:(id)arg2;

- (void)alarmOccurrencesBetweenStartDate:(id)arg1 endDate:(id)arg2 completion:(id)arg3;

- (void)alarmOccurrencesBetweenStartDate:(id)arg1 endDate:(id)arg2 inCalendars:(id)arg3 completion:(id)arg4;

- (id)alarmWithUUID:(id)arg1;

- (void)cacheValidationStatusForEmail:(id)arg1 status:(int)arg2;

- (id)calendarItemWithIdentifier:(id)arg1;

- (id)calendarItemsWithExternalIdentifier:(id)arg1;

@property(nonatomic) NSObject<OS_dispatch_queue> *calendarQueue; // @synthesize calendarQueue=_calendarQueue;

- (id)calendarWithExternalURI:(id)arg1;

- (id)calendarWithID:(id)arg1;

- (id)calendarWithIdentifier:(id)arg1;

@property(readonly, nonatomic) NSArray *calendars;

- (id)calendarsForEntityType:(unsigned long long)arg1;

- (void)cancelFetchRequest:(id)arg1;

- (id)changesSinceSequenceNumber:(int)arg1;

- (id)closestCachedOccurrenceToDate:(double)arg1 forEventUID:(int)arg2;

- (_Bool)commit:(id *)arg1;

@property(readonly) EKDaemonConnection *connection;

- (struct CGColor *)copyCGColorForNewCalendar;

- (int)countOfRemindersMatchingPredicate:(id)arg1;

- (void)daemonRestarted;

@property(retain, nonatomic) EKDaemonConnection *database; // @synthesize database=_database;

@property(nonatomic) NSObject<OS_dispatch_queue> *dbChangedQueue; // @synthesize dbChangedQueue=_dbChangedQueue;

- (void)dealloc;

@property(readonly, nonatomic) EKAlarm *defaultAllDayAlarm;

@property(retain, nonatomic) NSNumber *defaultAllDayAlarmOffset; // @synthesize defaultAllDayAlarmOffset=_defaultAllDayAlarmOffset;

@property(readonly, nonatomic) EKCalendar *defaultCalendarForNewEvents;

- (id)defaultCalendarForNewReminders;

@property(readonly, nonatomic) EKAlarm *defaultTimedAlarm;

@property(retain, nonatomic) NSNumber *defaultTimedAlarmOffset; // @synthesize defaultTimedAlarmOffset=_defaultTimedAlarmOffset;

- (_Bool)deleteCalendar:(id)arg1 forEntityType:(int)arg2 error:(id *)arg3;

@property(nonatomic) NSMutableSet *deletedObjects; // @synthesize deletedObjects=_deletedObjects;

- (id)doEvents:(id)arg1 haveOccurrencesAfterDate:(id)arg2;

- (id)earliestExpiringNotifiableEventEndDateAfterDate:(id)arg1 timeZone:(id)arg2;

- (int)emailAddressValidationStatus:(id)arg1;

- (void)enumerateEventsMatchingPredicate:(id)arg1 usingBlock:(id)arg2;

- (id)eventForUID:(id)arg1 occurrenceDate:(id)arg2;

- (id)eventForUID:(id)arg1 occurrenceDate:(id)arg2 checkValid:(_Bool)arg3;

@property(readonly, nonatomic) NSString *eventStoreIdentifier;

- (id)eventWithIdentifier:(id)arg1;

- (id)eventWithUUID:(id)arg1;

- (id)eventWithUniqueId:(id)arg1;

- (id)eventsMatchingPredicate:(id)arg1;

- (id)fetchEventsMatchingPredicate:(id)arg1 resultHandler:(id)arg2;

- (_Bool)fetchProperties:(id)arg1 forReminders:(id)arg2;

- (id)fetchRemindersMatchingPredicate:(id)arg1 completion:(id)arg2;

@property(nonatomic) unsigned int flags; // @synthesize flags=_flags;

- (id)getCalDAVLog;

- (id)getDataAccessLog;

- (_Bool)hideCalendarsFromNotificationCenter:(id)arg1 error:(id *)arg2;

- (id)importICS:(id)arg1 intoCalendar:(id)arg2 options:(unsigned long long)arg3;

- (id)importICSData:(id)arg1 intoCalendar:(id)arg2 options:(unsigned long long)arg3;

- (void)importICSData:(id)arg1 intoCalendar:(id)arg2 options:(unsigned long long)arg3 completion:(id)arg4;

- (id)init;

- (id)initWithOptions:(unsigned int)arg1 path:(id)arg2;

- (id)insertNewEvent;

- (id)insertNewExceptionDateWithDate:(id)arg1;

- (id)insertNewReminder;

@property(nonatomic) NSMutableSet *insertedObjects; // @synthesize insertedObjects=_insertedObjects;

- (id)inviteReplyNotifications;

- (_Bool)isDataProtected;

@property(nonatomic) double lastDatabaseNotificationTimestamp; // @synthesize lastDatabaseNotificationTimestamp=_lastDatabaseNotificationTimestamp;

- (id)localSource;

- (void)locationBasedAlarmOccurrencesWithCompletion:(id)arg1;

- (_Bool)markCalendarAlerted:(id)arg1;

- (void)markEventAlerted:(id)arg1;

- (_Bool)markInviteReplyNotificationAlerted:(id)arg1;

- (void)markNotificationsAlertedAndSave:(id)arg1;

- (_Bool)markResourceChangeAlerted:(id)arg1 error:(id *)arg2;

- (_Bool)moveDiagnosticsLogToCrashReporterFolder;

@property(readonly, nonatomic) int notifiableEventCount;

- (id)objectWithObjectID:(id)arg1;

@property(nonatomic) NSMutableSet *objectsPendingCommit; // @synthesize objectsPendingCommit=_objectsPendingCommit;

- (id)occurrenceCacheGetOccurrencesForCalendars:(id)arg1;

- (id)occurrenceCacheGetOccurrencesForCalendars:(id)arg1 onDay:(double)arg2;

- (_Bool)occurrenceCacheOccurrencesAreBeingGenerated;

- (id)ownedSources;

- (id)predicateForAllRemindersDueBeforeOrOnDueDate:(id)arg1 calendars:(id)arg2;

- (id)predicateForAllRemindersWithDueDate:(id)arg1 calendars:(id)arg2;

- (id)predicateForCompletedRemindersWithCalendars:(id)arg1;

- (id)predicateForCompletedRemindersWithCompletionDateStarting:(id)arg1 ending:(id)arg2 calendars:(id)arg3;

- (id)predicateForCompletedRemindersWithDueDate:(id)arg1 calendars:(id)arg2 sortOrder:(int)arg3;

- (id)predicateForCompletedRemindersWithDueDateOrCompletionDate:(id)arg1 calendars:(id)arg2 sortOrder:(int)arg3;

- (id)predicateForEventsWithStartDate:(id)arg1 endDate:(id)arg2 calendars:(id)arg3;

- (id)predicateForEventsWithStartDate:(id)arg1 endDate:(id)arg2 calendars:(id)arg3 loadDefaultProperties:(_Bool)arg4;

- (id)predicateForEventsWithStartDate:(id)arg1 endDate:(id)arg2 eventUUID:(id)arg3 calendars:(id)arg4;

- (id)predicateForIncompleteRemindersDueBeforeOrOnDueDate:(id)arg1 calendars:(id)arg2 sortOrder:(int)arg3;

- (id)predicateForIncompleteRemindersWithDueDate:(id)arg1 calendars:(id)arg2 sortOrder:(int)arg3;

- (id)predicateForIncompleteRemindersWithDueDateStarting:(id)arg1 ending:(id)arg2 calendars:(id)arg3;

- (id)predicateForMasterEventsInCalendars:(id)arg1;

- (id)predicateForNotifiableEvents;

- (id)predicateForNotificationCenterVisibleEvents;

- (id)predicateForRecentNotifiableEvents;

- (id)predicateForRemindersInCalendars:(id)arg1;

- (id)predicateForRemindersWithSearchTerm:(id)arg1;

- (id)predicateForRemindersWithTitle:(id)arg1 calendars:(id)arg2;

- (id)predicateForRemindersWithTitle:(id)arg1 listTitle:(id)arg2 limitToCompletedOrIncomplete:(_Bool)arg3 completed:(_Bool)arg4 dueAfter:(id)arg5 dueBefore:(id)arg6 searchTerm:(id)arg7 sortOrder:(int)arg8;

- (id)predicateForRemindersWithTitle:(id)arg1 listTitle:(id)arg2 limitToCompletedOrIncomplete:(_Bool)arg3 completed:(_Bool)arg4 dueAfter:(id)arg5 dueBefore:(id)arg6 searchTerm:(id)arg7 sortOrder:(int)arg8 maxResults:(unsigned long long)arg9;

- (id)predicateForUnacknowledgedEvents;

- (id)predicateForUnalertedEvents;

- (id)predicateForUpcomingEventsWithLimit:(int)arg1;

- (id)publicObjectWithObjectID:(id)arg1;

- (id)publicObjectWithPersistentObject:(id)arg1;

@property(nonatomic) NSMutableDictionary *publicRegisteredObjects; // @synthesize publicRegisteredObjects=_publicRegisteredObjects;

- (int)readWriteCalendarCountForEntityType:(unsigned long long)arg1;

- (id)readWriteCalendarsForEntityType:(unsigned long long)arg1;

- (void)refreshSourcesIfNecessary;

- (void)refreshSourcesIfNecessary:(_Bool)arg1;

- (id)registerFetchedObjectWithID:(id)arg1;

- (id)registerFetchedObjectWithID:(id)arg1 withDefaultLoadedProperties:(id)arg2 inSet:(id)arg3;

@property(nonatomic) NSMutableDictionary *registeredObjects; // @synthesize registeredObjects=_registeredObjects;

@property(nonatomic) NSObject<OS_dispatch_queue> *registeredQueue; // @synthesize registeredQueue=_registeredQueue;

- (oneway void)release;

- (id)reminderWithExternalURI:(id)arg1;

- (id)remindersMatchingPredicate:(id)arg1;

- (_Bool)removeCalendar:(id)arg1 commit:(_Bool)arg2 error:(id *)arg3;

- (_Bool)removeCalendar:(id)arg1 error:(id *)arg2;

- (_Bool)removeEvent:(id)arg1 span:(int)arg2 commit:(_Bool)arg3 error:(id *)arg4;

- (_Bool)removeEvent:(id)arg1 span:(int)arg2 error:(id *)arg3;

- (_Bool)removeInviteReplyNotification:(id)arg1 error:(id *)arg2;

- (_Bool)removeInviteReplyNotifications:(id)arg1 error:(id *)arg2;

- (_Bool)removeReminder:(id)arg1 commit:(_Bool)arg2 error:(id *)arg3;

- (_Bool)removeReminder:(id)arg1 error:(id *)arg2;

- (_Bool)removeResourceChange:(id)arg1 error:(id *)arg2;

- (_Bool)removeResourceChanges:(id)arg1 error:(id *)arg2;

- (_Bool)removeSource:(id)arg1 error:(id *)arg2;

- (void)requestAccessToEntityType:(unsigned long long)arg1 completion:(id)arg2;

- (void)reset;

- (id)resourceChangesForEntityTypes:(unsigned long long)arg1;

- (void)rollback;

- (_Bool)saveCalendar:(id)arg1 commit:(_Bool)arg2 error:(id *)arg3;

- (_Bool)saveCalendar:(id)arg1 error:(id *)arg2;

- (_Bool)saveEvent:(id)arg1 span:(int)arg2 commit:(_Bool)arg3 error:(id *)arg4;

- (_Bool)saveEvent:(id)arg1 span:(int)arg2 error:(id *)arg3;

- (_Bool)saveReminder:(id)arg1 commit:(_Bool)arg2 error:(id *)arg3;

- (_Bool)saveReminder:(id)arg1 error:(id *)arg2;

- (_Bool)saveSource:(id)arg1 error:(id *)arg2;

- (id)scheduledTaskCacheFetchDaysAndTaskCounts;

- (id)scheduledTaskCacheFetchTasksOnDay:(id)arg1;

- (int)sequenceNumber;

@property(readonly) unsigned int serverPort;

- (void)setDefaultCalendarForNewEvents:(id)arg1;

- (void)setDefaultCalendarForNewReminders:(id)arg1;

- (_Bool)setInvitationStatus:(unsigned long long)arg1 forEvent:(id)arg2 error:(id *)arg3;

- (_Bool)setInvitationStatus:(unsigned long long)arg1 forEvents:(id)arg2 error:(id *)arg3;

- (void)setShowDeclinedEvents:(_Bool)arg1;

@property(copy, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;

@property(nonatomic) NSObject<OS_dispatch_queue> *unsavedChangesQueue; // @synthesize unsavedChangesQueue=_unsavedChangesQueue;

@property(nonatomic) NSMutableSet *updatedObjects; // @synthesize updatedObjects=_updatedObjects;

- (id)sharedCalendarInvitationsForEntityTypes:(unsigned long long)arg1;

- (id)sourceWithIdentifier:(id)arg1;

- (id)sources;

@property(readonly, nonatomic) int unacknowledgedEventCount;



@end



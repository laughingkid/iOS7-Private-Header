/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class ACDDatabase, NSArray;



@interface ACDDatabaseInitializer : NSObject

{

    ACDDatabase *_database;

    NSArray *_dataclasses;

    NSArray *_accountTypes;

    NSArray *_accounts;

    NSArray *_accessKeys;

}



- (void).cxx_destruct;

- (id)_accessKeyWithName:(id)arg1;

- (id)_accessKeys;

- (id)_accountTypeWithIdentifier:(id)arg1;

- (id)_accountTypes;

- (id)_accounts;

- (void)_addAccessKeyWithName:(id)arg1;

- (void)_addAccessKeysAttributeToFacebookAccountType;

- (void)_addAccessKeysAttributeToLinkedInAccountType;

- (void)_addAccessKeysAttributeToLiverpoolAccountType;

- (void)_addAccessKeysAttributeToTencentWeiboAccountType;

- (void)_addAccountTypeWithIdentifier:(id)arg1 displayName:(id)arg2 visibility:(int)arg3 supportedDataclasses:(id)arg4 credentialType:(id)arg5 supportsAuthentication:(_Bool)arg6 supportsMultipleAccounts:(_Bool)arg7;

- (void)_addAccountTypeWithIdentifier:(id)arg1 displayName:(id)arg2 visibility:(int)arg3 supportedDataclasses:(id)arg4 syncableDataclasses:(id)arg5 credentialType:(id)arg6 supportsAuthentication:(_Bool)arg7 supportsMultipleAccounts:(_Bool)arg8;

- (void)_addAccountTypeWithIdentifier:(id)arg1 displayName:(id)arg2 visibility:(int)arg3 supportedDataclasses:(id)arg4 syncableDataclasses:(id)arg5 credentialType:(id)arg6 supportsAuthentication:(_Bool)arg7 supportsMultipleAccounts:(_Bool)arg8 credentialProtectionPolicy:(id)arg9;

- (void)_addAppleAccountType;

- (void)_addAppleIDAccountType;

- (void)_addBookmarkDAVAccountType;

- (void)_addCalDAVAccountType;

- (void)_addCardDAVAccountType;

- (void)_addContactsCalendarsDataclassesToFB;

- (void)_addCredentialType:(id)arg1 toAccountType:(id)arg2 supportsAuthentication:(_Bool)arg3;

- (void)_addDataclassWithName:(id)arg1;

- (void)_addExchangeAccountType;

- (void)_addFaceTimeAccountType;

- (void)_addFacebookAccessKeys;

- (void)_addFacebookAccountType;

- (void)_addFacebookAudienceAccessKey;

- (void)_addFacebookAudienceAccessKeyToFacebookAccountType;

- (void)_addFindMyiPhoneAccountType;

- (void)_addFlickrAccountType;

- (void)_addGameCenterAccountType;

- (void)_addGmailAccountType;

- (void)_addHotmailAccountType;

- (void)_addIMAPAccountType;

- (void)_addIMAPMailAccountType;

- (void)_addIMAPNotesAccountType;

- (void)_addIdentityServicesAccountType;

- (void)_addLDAPAccountType;

- (void)_addLinkedInAccessKeys;

- (void)_addLinkedInAccountType;

- (void)_addLiverpoolAccessKeys;

- (void)_addLiverpoolAccountType;

- (void)_addMadridAccountType;

- (void)_addMissingAccountTypes;

- (void)_addPOPAccountType;

- (void)_addPasswordCredentialTypeToGmailAccountType;

- (void)_addPasswordCredentialTypeToSMTPAccountType;

- (void)_addRemindersDataclassToCalDAVAccountType;

- (void)_addSMTPAccountType;

- (void)_addSubscribedCalendarAccountType;

- (void)_addSupportsAuthenticationAttributeToAccountTypes;

- (void)_addSupportsAuthenticationAttributeToAccounts;

- (void)_addSupportsMultipleAccountsAttributeToAccountTypes;

- (void)_addSyncableDataclassesToCardAndCalDAV;

- (void)_addTencentWeiboAccessKeys;

- (void)_addTencentWeiboAccountType;

- (void)_addTokenCredentialTypeToYahooAccountType;

- (void)_addTudouAccountType;

- (void)_addTwitterAccountType;

- (void)_addVimeoAccountType;

- (void)_addWeiboAccountType;

- (void)_addYahooAccountType;

- (void)_addYelpAccountType;

- (void)_addYoukuAccountType;

- (void)_addiTunesStoreAccountType;

- (id)_dataclassWithName:(id)arg1;

- (id)_dataclasses;

- (void)_ensureAccountTypeWithIdentifier:(id)arg1 supportsDataclasses:(id)arg2 syncsDataclasses:(id)arg3;

- (void)_ensureProperAccountTypeDataclasses;

- (void)_limitFlickrToOneAccount;

- (void)_limitLinkedInToOneAccount;

- (void)_limitVimeoToOneAccount;

- (void)_makeTencentWeiboSingleton;

- (void)_removeFacebookAppVersionAccessKey;

- (void)_removeFacebookPermissionGroupAccessKey;

- (id)_resultsForEntityNamed:(id)arg1;

- (void)_updateFlickrCredentialTypeToOAuth;

- (void)_updateIdentityServicesAccountDescription;

- (void)_updateIdentityServicesAccountTypeToSupportAuthenticationAndMultipleAccounts;

- (void)_updateTencentWeiboCredentialTypeToOAuth2;

- (void)_updateVimeoCredentialTypeToOAuth;

- (void)_updateWeiboAccountTypeIfNecessary;

- (void)_upgradeLinkedInAccountType;

- (id)initWithDatabase:(id)arg1;

- (void)insertAllDefaultContent;

- (void)updateDefaultContent;



@end


/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "ACAccountStore.h"



#import "ACDAccountStoreProtocol.h"



@class ACDAccessPluginManager, ACDAccountStoreFilter, ACDAuthenticationDialogManager, ACDAuthenticationPluginManager, ACDClient, ACDClientAuthorizationManager, ACDDatabase, ACDDataclassOwnersManager, NSMutableArray;



@interface ACDAccountStore : ACAccountStore <ACDAccountStoreProtocol>

{

    NSMutableArray *_accountChanges;

    ACDDatabase *_database;

    ACDClientAuthorizationManager *_authorizationManager;

    _Bool _notificationsEnabled;

    _Bool _migrationInProgress;

    id <ACDAccountStoreDelegate> _delegate;

    ACDClient *_client;

    ACDAccountStoreFilter *_filter;

    ACDAuthenticationPluginManager *_authenticationPluginManager;

    ACDAccessPluginManager *_accessPluginManager;

    ACDDataclassOwnersManager *_dataclassOwnersManager;

    ACDAuthenticationDialogManager *_authenticationDialogManager;

}



- (void).cxx_destruct;

- (id)_accountTypeWithIdentifier:(id)arg1;

- (id)_accountWithIdentifier:(id)arg1;

- (id)_addAccountNoSave:(id)arg1 withDataclassActions:(id)arg2 error:(id *)arg3;

- (id)_allAccounts_sync;

- (_Bool)_canManagedAccountType:(id)arg1 syncManagedDataclass:(id)arg2;

- (_Bool)_canSaveAccount:(id)arg1;

- (id)_childAccountsForAccountWithID:(id)arg1;

- (id)_clientTokenForAccountIdentifier:(id)arg1 error:(id)arg2;

- (id)_clientTokenQueue;

- (void)_completeSave:(id)arg1 dataclassActions:(id)arg2 completion:(id)arg3;

- (void)_connectToRemoteAccountStoreUsingEndpoint:(id)arg1;

- (id)_dataclassWithName:(id)arg1 createIfNecessary:(_Bool)arg2;

- (void)_deleteAccountNoSave:(id)arg1 withDataclassActions:(id)arg2 error:(id *)arg3;

- (id)_displayAccountForAccount:(id)arg1;

- (id)_handleAccountAdd:(id)arg1 withDataclassActions:(id)arg2;

- (id)_handleAccountMod:(id)arg1 withDataclassActions:(id)arg2;

- (_Bool)_isManagedAccount:(id)arg1 enabledForManagedDataclass:(id)arg2;

- (id)_legacyCredentialForAccount:(id)arg1 client:(id)arg2 error:(id *)arg3;

- (void)_noteAccountStoreDidSaveAccountsWithAccountTypeIdentifiers:(id)arg1;

- (id)_remoteAccountStore;

- (id)_removeAccountNoSave:(id)arg1 withDataclassActions:(id)arg2;

- (void)_removeClientTokenForAccountIdentifer:(id)arg1;

- (void)_requestAccessForAccountTypeWithIdentifier:(id)arg1 options:(id)arg2 allowUserInteraction:(_Bool)arg3 withHandler:(id)arg4;

- (id)_save;

- (void)_setAccountManagedObjectRelationships:(id)arg1 withAccount:(id)arg2 isNew:(_Bool)arg3 error:(id *)arg4;

- (void)_updateAccountNoSave:(id)arg1 withDataclassActions:(id)arg2 error:(id *)arg3;

- (void)_updateExistenceCacheOfAccountWithTypeIdentifier:(id)arg1 withHandler:(id)arg2;

- (void)accessKeysForAccountType:(id)arg1 handler:(id)arg2;

@property(retain, nonatomic) ACDAccessPluginManager *accessPluginManager; // @synthesize accessPluginManager=_accessPluginManager;

- (void)accountExistsWithDescription:(id)arg1 completion:(id)arg2;

- (void)accountIdentifiersEnabledForDataclass:(id)arg1 handler:(id)arg2;

- (void)accountIdentifiersEnabledForDataclasses:(id)arg1 withAccountTypeIdentifiers:(id)arg2 completion:(id)arg3;

- (void)accountIdentifiersEnabledToSyncDataclass:(id)arg1 handler:(id)arg2;

- (id)accountTypeWithIdentifier:(id)arg1;

- (void)accountTypeWithIdentifier:(id)arg1 handler:(id)arg2;

- (void)accountTypesWithHandler:(id)arg1;

- (void)accountWithIdentifier:(id)arg1 handler:(id)arg2;

- (_Bool)accountsExistWithAccountTypeIdentifier:(id)arg1;

- (void)accountsWithAccountType:(id)arg1 handler:(id)arg2;

- (id)accountsWithAccountTypeIdentifier:(id)arg1;

- (void)accountsWithHandler:(id)arg1;

- (void)addAccountNoSave:(id)arg1 error:(id *)arg2;

- (void)addClientToken:(id)arg1 forAccountIdentifier:(id)arg2 completion:(id)arg3;

- (void)appPermissionsForAccountType:(id)arg1 withHandler:(id)arg2;

@property(retain, nonatomic) ACDAuthenticationDialogManager *authenticationDialogManager; // @synthesize authenticationDialogManager=_authenticationDialogManager;

@property(retain, nonatomic) ACDAuthenticationPluginManager *authenticationPluginManager; // @synthesize authenticationPluginManager=_authenticationPluginManager;

@property(readonly, nonatomic) ACDClientAuthorizationManager *authorizationManager; // @synthesize authorizationManager=_authorizationManager;

- (void)canSaveAccount:(id)arg1 completion:(id)arg2;

- (void)childAccountsForAccountWithIdentifier:(id)arg1 handler:(id)arg2;

- (void)childAccountsWithAccountTypeIdentifier:(id)arg1 parentAccountIdentifier:(id)arg2 handler:(id)arg3;

- (void)clearAllPermissionsGrantedForAccountType:(id)arg1 withHandler:(id)arg2;

- (void)clearGrantedPermissionsForAccountType:(id)arg1 withHandler:(id)arg2;

@property(nonatomic) __weak ACDClient *client; // @synthesize client=_client;

- (void)clientTokenForAccountIdentifier:(id)arg1 completion:(id)arg2;

- (void)credentialForAccountWithIdentifier:(id)arg1 bundleID:(id)arg2 handler:(id)arg3;

- (void)credentialForAccountWithIdentifier:(id)arg1 handler:(id)arg2;

- (void)dataclassActionsForAccountDeletion:(id)arg1 completion:(id)arg2;

- (void)dataclassActionsForAccountSave:(id)arg1 completion:(id)arg2;

@property(retain, nonatomic) ACDDataclassOwnersManager *dataclassOwnersManager; // @synthesize dataclassOwnersManager=_dataclassOwnersManager;

- (void)dataclassesWithHandler:(id)arg1;

@property(nonatomic) __weak id <ACDAccountStoreDelegate> delegate; // @synthesize delegate=_delegate;

- (void)deleteAccountNoSave:(id)arg1 error:(id *)arg2;

- (void)displayAccountTypeForAccountWithIdentifier:(id)arg1 handler:(id)arg2;

- (void)enabledDataclassesForAccountWithIdentifier:(id)arg1 handler:(id)arg2;

@property(nonatomic) __weak ACDAccountStoreFilter *filter; // @synthesize filter=_filter;

- (void)grantedPermissionsForAccountType:(id)arg1 withHandler:(id)arg2;

- (void)handleURL:(id)arg1;

- (id)initWithClient:(id)arg1;

- (void)insertAccountType:(id)arg1 withHandler:(id)arg2;

@property(nonatomic, getter=isMigrationInProgress) _Bool migrationInProgress; // @synthesize migrationInProgress=_migrationInProgress;

- (void)isPerformingDataclassActionsForAccount:(id)arg1 completion:(id)arg2;

- (void)isPushSupportedForAccount:(id)arg1 completion:(id)arg2;

- (void)isTetheredSyncingEnabledForDataclass:(id)arg1 completion:(id)arg2;

- (void)kerberosAccountsForDomainFromURL:(id)arg1 completion:(id)arg2;

- (id)masterCredentialForAccountIdentifier:(id)arg1;

@property(nonatomic) _Bool notificationsEnabled; // @synthesize notificationsEnabled=_notificationsEnabled;

- (void)openAuthenticationURL:(id)arg1 forAccount:(id)arg2 shouldConfirm:(_Bool)arg3 completion:(id)arg4;

- (void)parentAccountForAccountWithIdentifier:(id)arg1 handler:(id)arg2;

- (void)permissionForAccountType:(id)arg1 withHandler:(id)arg2;

- (void)provisionedDataclassesForAccountWithIdentifier:(id)arg1 handler:(id)arg2;

- (void)removeAccount:(id)arg1 withDataclassActions:(id)arg2 completion:(id)arg3;

- (void)removeAccountType:(id)arg1 withHandler:(id)arg2;

- (void)renewCredentialsForAccount:(id)arg1 options:(id)arg2 completion:(id)arg3;

- (void)requestAccessForAccountTypeWithIdentifier:(id)arg1 options:(id)arg2 withHandler:(id)arg3;

- (void)saveAccount:(id)arg1 pid:(id)arg2 verify:(_Bool)arg3 dataclassActions:(id)arg4 completion:(id)arg5;

- (void)saveAccount:(id)arg1 verify:(_Bool)arg2 dataclassActions:(id)arg3 completion:(id)arg4;

- (void)saveAccount:(id)arg1 withHandler:(id)arg2;

- (void)setClientBundleID:(id)arg1 withHandler:(id)arg2;

- (void)setNotificationsEnabledNum:(_Bool)arg1;

- (void)setPermissionGranted:(id)arg1 forBundleID:(id)arg2 onAccountType:(id)arg3 withHandler:(id)arg4;

- (void)supportedDataclassesForAccountType:(id)arg1 handler:(id)arg2;

- (void)syncableDataclassesForAccountType:(id)arg1 handler:(id)arg2;

- (void)tetheredSyncSourceTypeForDataclass:(id)arg1 completion:(id)arg2;

- (void)typeIdentifierForDomain:(id)arg1 withHandler:(id)arg2;

- (void)updateAccountNoSave:(id)arg1 error:(id *)arg2;

- (void)updateExistenceCacheOfAccountWithTypeIdentifier:(id)arg1 withHandler:(id)arg2;

- (void)verifyCredentialsForAccount:(id)arg1 saveWhenAuthorized:(_Bool)arg2 withHandler:(id)arg3;



@end



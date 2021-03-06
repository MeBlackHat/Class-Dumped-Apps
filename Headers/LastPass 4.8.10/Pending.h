//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LPEntity.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "VaultEntity-Protocol.h"

@class NSMutableDictionary, NSString;

@interface Pending : LPEntity <NSCoding, NSCopying, VaultEntity>
{
    NSString *_aid;
    NSString *_fiid;
    NSString *_sharerusername;
    NSString *_sharedfromaid;
    NSString *_sharemessage;
    NSString *_sharekeyenchex;
    NSString *_sharekeyenchexsig;
    NSString *_sharename;
    NSString *_sharegroup;
    NSString *_username;
    NSString *_password;
    NSString *_extra;
    NSString *_shareautoaccept;
    NSMutableDictionary *_shareafids;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *shareafids; // @synthesize shareafids=_shareafids;
@property(retain, nonatomic) NSString *shareautoaccept; // @synthesize shareautoaccept=_shareautoaccept;
@property(retain, nonatomic) NSString *extra; // @synthesize extra=_extra;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *sharegroup; // @synthesize sharegroup=_sharegroup;
@property(retain, nonatomic) NSString *sharename; // @synthesize sharename=_sharename;
@property(retain, nonatomic) NSString *sharekeyenchexsig; // @synthesize sharekeyenchexsig=_sharekeyenchexsig;
@property(retain, nonatomic) NSString *sharekeyenchex; // @synthesize sharekeyenchex=_sharekeyenchex;
@property(retain, nonatomic) NSString *sharemessage; // @synthesize sharemessage=_sharemessage;
@property(retain, nonatomic) NSString *sharedfromaid; // @synthesize sharedfromaid=_sharedfromaid;
@property(retain, nonatomic) NSString *sharerusername; // @synthesize sharerusername=_sharerusername;
@property(retain, nonatomic) NSString *fiid; // @synthesize fiid=_fiid;
@property(retain, nonatomic) NSString *aid; // @synthesize aid=_aid;
- (_Bool)passesFilter:(id)arg1 searchInNotes:(_Bool)arg2 searchInUsernames:(_Bool)arg3;
- (_Bool)passesFilter:(id)arg1 searchInNotes:(_Bool)arg2;
- (_Bool)passesFilter:(id)arg1;
- (id)getPassword;
- (id)getUsername;
- (id)getGroup;
@property(readonly, nonatomic) _Bool isPasswordVisible;
@property(readonly, nonatomic) _Bool isEditable;
@property(readonly, nonatomic) _Bool isMovable;
@property(readonly, nonatomic) _Bool isSharedToOthers;
@property(readonly, nonatomic) _Bool isShared;
@property(readonly, nonatomic) _Bool isNew;
@property(readonly, nonatomic) _Bool isFillable;
@property(readonly, nonatomic) _Bool isGroup;
@property(readonly, nonatomic) _Bool isFavorite;
@property(readonly, nonatomic) _Bool isPendingShare;
@property(readonly, nonatomic) _Bool isSecureNote;
@property(readonly, nonatomic) _Bool isAccount;
@property(readonly, nonatomic) _Bool hasURL;
@property(readonly, nonatomic) _Bool hasSiteIcon;
@property(readonly, nonatomic) _Bool hasCopiable;
@property(readonly, nonatomic) _Bool hasUsername;
@property(readonly, nonatomic) _Bool hasPassword;
@property(readonly, nonatomic) _Bool hasFavorite;
@property(readonly, nonatomic) _Bool hasAddress;
@property(readonly, nonatomic) _Bool requirePasswordRepromptForManageShare;
@property(readonly, nonatomic) _Bool requirePasswordRepromptForLaunch;
@property(readonly, nonatomic) _Bool requirePasswordRepromptForEdit;
@property(readonly, nonatomic) _Bool requirePasswordRepromptForPassword;
- (long long)localizedCaseInsensitiveCompare:(id)arg1;
- (long long)compare:(id)arg1;
- (id)iconBackgroundColor;
- (id)iconImage;
- (id)getKey;
- (id)getShareInfo;
- (id)toAccount;
- (id)getName;
- (id)uniqueID;
- (void)copyFrom:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMEThermostatAtomModelController-Protocol.h"

@class HMENetworkModel, NSString;
@protocol GHCEnergyService, HMEThermostatAtomModelControllerDelegate;

@interface HMEThermostatAtomModelController : NSObject <HMEThermostatAtomModelController>
{
    _Bool _hasCustomAtom;
    unsigned int _maxNumberOfAtoms;
    id <HMEThermostatAtomModelControllerDelegate> _delegate;
    id <GHCEnergyService> _energyService;
    NSString *_hgsDeviceID;
    HMENetworkModel *_model;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int maxNumberOfAtoms; // @synthesize maxNumberOfAtoms=_maxNumberOfAtoms;
@property(nonatomic) _Bool hasCustomAtom; // @synthesize hasCustomAtom=_hasCustomAtom;
@property(retain, nonatomic) HMENetworkModel *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *hgsDeviceID; // @synthesize hgsDeviceID=_hgsDeviceID;
@property(retain, nonatomic) id <GHCEnergyService> energyService; // @synthesize energyService=_energyService;
@property(nonatomic) __weak id <HMEThermostatAtomModelControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (CDUnknownBlockType)cancelHandler;
- (id)lastAction;
- (_Bool)hasReachedMaximumNumberOfAtoms;
- (_Bool)isEmpty;
- (void)updateAtomSettings:(id)arg1;
- (long long)indexOfItem:(id)arg1;
- (id)itemAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfItems;
- (void)parseUpdateScheduleAtom:(id)arg1 error:(id)arg2 atom:(id)arg3 sender:(id)arg4;
- (void)parseRemoveScheduleAtom:(id)arg1 error:(id)arg2 atomID:(unsigned int)arg3 sender:(id)arg4;
- (void)parseAddScheduleAtom:(id)arg1 error:(id)arg2 atom:(id)arg3 sender:(id)arg4;
- (void)parseFetchScheduleAtoms:(id)arg1 error:(id)arg2 sender:(id)arg3;
- (void)updateScheduleAtom:(id)arg1 sender:(id)arg2;
- (void)removeScheduleAtomWithID:(unsigned int)arg1 sender:(id)arg2;
- (void)addScheduleAtom:(id)arg1 sender:(id)arg2;
- (void)fetchScheduleAtoms:(id)arg1;
- (id)initWithEnergyService:(id)arg1 hgsDeviceID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


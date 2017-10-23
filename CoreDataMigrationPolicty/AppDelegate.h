//
//  AppDelegate.h
//  CoreDataMigrationPolicty
//
//  Created by Mohankumar on 23/10/17.
//  Copyright © 2017 Mohankumar. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end


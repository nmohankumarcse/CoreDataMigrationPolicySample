//
//  Sample+CoreDataProperties.h
//  CoreDataMigrationPolicty
//
//  Created by Mohankumar on 23/10/17.
//  Copyright © 2017 Mohankumar. All rights reserved.
//
//

#import "Sample+CoreDataClass.h"


NS_ASSUME_NONNULL_BEGIN

@interface Sample (CoreDataProperties)

+ (NSFetchRequest<Sample *> *)fetchRequest;

@property (nonatomic) NSString *number;
@property (nullable, nonatomic, copy) NSString *name;

@end

NS_ASSUME_NONNULL_END

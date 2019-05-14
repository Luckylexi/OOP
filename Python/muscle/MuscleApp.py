import Muscle
import Weight
import MuscleTest

def main():
    biceps = Muscle.agonistMuscle("Biceps Bracii", 20, 20, 2)
    MuscleTest.leafConstrucTest(biceps, "Biceps Bracii", 20, 20, 2)
    
    triceps = Muscle.antagonistMuscle("Triceps Bracii", 33, 33, 4)
    MuscleTest.leafConstrucTest(triceps, "Triceps Bracii", 33,33,4)
    
    armMuscles = Muscle.muscleGroup("Upper Arm Muscles")
    MuscleTest.compAddTest(armMuscles, biceps)
    MuscleTest.compAddTest(armMuscles, triceps)
    #armMuscles.addMuscle(biceps)
    #armMuscles.addMuscle(triceps)

    handWeight = Weight.weight(15)
    MuscleTest.moveWellTest(armMuscles, handWeight.weight)

    handWeight.addWeight(5)
    MuscleTest.moveDecentTest(armMuscles, handWeight.weight)

    handWeight.addWeight(10)
    MuscleTest.strainTest(armMuscles,handWeight.weight)


    '''print("\nStart strength")
    armMuscles.move(handWeight.weight)
    armMuscles.move(-handWeight.weight)

    print('\n')
    Muscle.reps(armMuscles, 20, handWeight.weight)
    #Muscle.reps(armMuscles, 10, handWeight.weight)

    print("\nEnd strength")
    armMuscles.move(handWeight.weight)
    armMuscles.move(-handWeight.weight)
    print('\n')'''

if __name__ == "__main__":
    main()

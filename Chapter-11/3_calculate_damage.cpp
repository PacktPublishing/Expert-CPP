int calculate_damage(const std::vector<CharacterUnit*>& units)
{
  return std::reduce(units.begin(), units.end(), 0, 
            [](CharacterUnit& u1, CharacterUnit& u2) {
                return u1.get_power() + u2.get_power();
            }
  );
}
